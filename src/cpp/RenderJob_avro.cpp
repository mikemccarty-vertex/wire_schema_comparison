#include <cassert>
#include <fstream>
#include <vector>

#include "RenderJob_avro.hpp"
#include "AvroSerializer.hpp"


using ByteBuffer = std::vector<std::uint8_t>;

using namespace speedracer_avro;

namespace TestData1 {
    BoundingBox2i frag_box1{};
    BoundingBox2i frag_box2{};

    const char frag_key1[] = "KEY1";
    const char frag_key2[] = "KEY2";

    const char frame_id[] = "FRAME_ID";

    const int total_count = 100000;
    const int accum_count = 0;
    
    ByteBuffer write()
    {
        ImageFragmentList ifl;

        ifl.frame.id = frame_id;
        ifl.totalCount = total_count;
        ifl.accumCount = accum_count;

        ImageFragmentInfo ifi;
        ifi.key = frag_key1;
        ifi.bounds = frag_box1;
        ifi.isOpaque = false;
        ifl.fragments.emplace_back(ifi);
        
        ifi.key = frag_key2;
        ifi.bounds = frag_box2;
        ifi.isOpaque = false;
        ifl.fragments.emplace_back(ifi);

        ByteBuffer retval;
        speedracer::avroutils::encode(retval, ifl);

        std::ofstream os("/tmp/TestData1_avro.bin", std::ios::binary);
        os.write(reinterpret_cast<const char*>(retval.data()),retval.size());
        os.close();

        return retval;
    }
    
    void read(const ByteBuffer& bytes)
    {
        ImageFragmentList ifl;
        speedracer::avroutils::decode(ifl, bytes);

        assert(ifl.frame.id == frame_id);
        assert(ifl.totalCount == total_count);
        assert(ifl.accumCount == accum_count);

        assert(ifl.fragments.size()==2);

        const auto& ifi1 = ifl.fragments[0];
        const auto& ifi2 = ifl.fragments[1];

        assert(ifi1.key == frag_key1);
        assert(ifi2.key == frag_key2);
    }

    void test()
    {
        frag_box1.xmin = 1;
        frag_box1.xmax = 1<<8;
        frag_box1.ymin = 1<<16;
        frag_box1.ymax = 1<<24;

        frag_box2.xmin = 1<<24;
        frag_box2.xmax = 1<<16;
        frag_box2.ymin = 1<<8;
        frag_box2.ymax = 1;

        read(write());
    }
} // namespace TestData1


int main()
{
    TestData1::test();
    
    return 0;
}
