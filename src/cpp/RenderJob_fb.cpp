#include <cassert>
#include <fstream>
#include <vector>

#include "RenderJob_fb.hpp"


using ByteBuffer = std::vector<std::uint8_t>;

using namespace speedracer_fb;

namespace TestData1 {
    const BoundingBox2i frag_box1{1, 1<<8, 1<<16, 1<<24};
    const BoundingBox2i frag_box2{1<<24, 1<<16, 1<<8, 1};

    const char frag_key1[] = "KEY1";
    const char frag_key2[] = "KEY2";

    const char frame_id[] = "FRAME_ID";

    const int total_count = 100000;
    const int accum_count = 0;
    
    ByteBuffer write()
    {
        flatbuffers::FlatBufferBuilder builder;

        std::vector<flatbuffers::Offset<ImageFragmentInfo>> ifis;
        ifis.emplace_back( CreateImageFragmentInfoDirect(builder, frag_key1, &frag_box1, false) );
        ifis.emplace_back( CreateImageFragmentInfoDirect(builder, frag_key2, &frag_box1, false) );

        auto ifl = CreateImageFragmentListDirect(builder,
                                                 CreateFrameIDDirect(builder, frame_id),
                                                 &ifis, total_count, accum_count);

        builder.Finish(ifl);
        auto retval = ByteBuffer{ builder.GetBufferPointer(), builder.GetBufferPointer() + builder.GetSize() };

        std::ofstream os("/tmp/TestData1_fb.bin", std::ios::binary);
        os.write(reinterpret_cast<const char*>(retval.data()),retval.size());
        os.close();

        return retval;
    }
    
    void read(const ByteBuffer& bytes)
    {
        auto ifl = flatbuffers::GetRoot<ImageFragmentList>(bytes.data());
        assert(ifl);

        assert(ifl->frame() && ifl->frame()->id() && ifl->frame()->id()->str() == frame_id);
        assert(ifl->totalCount() == total_count);
        assert(ifl->accumCount() == accum_count);

        assert(ifl->fragments());
        assert(ifl->fragments()->size()==2);

        const auto& ifi1 = ifl->fragments()->Get(0);
        const auto& ifi2 = ifl->fragments()->Get(1);

        assert(ifi1->key() && ifi1->key()->str() == frag_key1);
        assert(ifi2->key() && ifi2->key()->str() == frag_key2);
        
        assert(ifl);
    }
    

    void test()
    {
        read(write());
    }
} // namespace TestData1


int main()
{
    TestData1::test();
    
    return 0;
}
