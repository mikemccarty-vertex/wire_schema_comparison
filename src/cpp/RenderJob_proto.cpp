#include <cassert>
#include <fstream>
#include <sstream>
#include <vector>

#include "schemata/RenderJob.pb.cc"


using ByteBuffer = std::vector<std::uint8_t>;

using namespace speedracer_proto;

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

        ifl.mutable_frame()->set_id(frame_id);
        ifl.set_totalcount(total_count);
        ifl.set_accumcount(accum_count);

        ImageFragmentInfo& ifi1 = *ifl.add_fragments();
        ifi1.set_key(frag_key1);
        *ifi1.mutable_bounds() = frag_box1;
        ifi1.set_isopaque(true);

        ImageFragmentInfo& ifi2 = *ifl.add_fragments();
        ifi2.set_key(frag_key2);
        *ifi2.mutable_bounds() = frag_box2;
        ifi2.set_isopaque(true);

        std::ostringstream sstream;
        assert(ifl.SerializeToOstream(&sstream));

        std::ofstream os("/tmp/TestData1_proto.bin", std::ios::binary);
        const auto& str = sstream.str();
        os.write(str.data(),str.size());
        os.close();

        return ByteBuffer{str.data(), str.data()+str.size()};
    }
    
    void read(const ByteBuffer& bytes)
    {
        std::istringstream sstream( std::string{reinterpret_cast<const char*>(bytes.data()), bytes.size()});

        ImageFragmentList ifl;
        assert(ifl.ParseFromIstream(&sstream));

        assert(ifl.frame().id() == frame_id);
        assert(ifl.totalcount() == total_count);
        assert(ifl.accumcount() == accum_count);

        assert(ifl.fragments_size()==2);
        assert(ifl.fragments(0).key() == frag_key1);
        assert(ifl.fragments(1).key() == frag_key2);
    }
    

    void test()
    {
        frag_box1.set_xmin(1);
        frag_box1.set_xmax(1<<8);
        frag_box1.set_ymin(1<<16);
        frag_box1.set_ymax(1<<24);

        frag_box2.set_xmin(1<<24);
        frag_box2.set_xmax(1<<16);
        frag_box2.set_ymin(1<<8);
        frag_box2.set_ymax(1);

        read(write());
    }
} // namespace TestData1


int main()
{
    TestData1::test();
    
    return 0;
}
