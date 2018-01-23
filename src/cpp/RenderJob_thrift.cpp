#include <cassert>
#include <fstream>
#include <vector>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/stdcxx.h>
#include <thrift/transport/TBufferTransports.h>

#include "speedracer_thrift/RenderJob_types.h"
#include "speedracer_thrift/RenderJob_constants.h"
#include "speedracer_thrift/RenderJob_types.cpp"
#include "speedracer_thrift/RenderJob_constants.cpp"


using ByteBuffer = std::vector<std::uint8_t>;
using apache::thrift::protocol::TBinaryProtocol;
using apache::thrift::transport::TMemoryBuffer;
using apache::thrift::transport::TTransportException;
using apache::thrift::stdcxx::shared_ptr;

using namespace speedracer_thrift;

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

        ImageFragmentInfo ifi1{};
        ifi1.key = frag_key1;
        ifi1.bounds = frag_box1;
        ifi1.isOpaque = true;
        ifl.fragments.emplace_back(ifi1);

        ImageFragmentInfo ifi2{};
        ifi2.key = frag_key2;
        ifi2.bounds = frag_box2;
        ifi2.isOpaque = true;
        ifl.fragments.emplace_back(ifi2);

        shared_ptr<TMemoryBuffer> buffer = std::make_shared<TMemoryBuffer>();
        shared_ptr<TBinaryProtocol> protocol = std::make_shared<TBinaryProtocol>(buffer);
        ifl.write(protocol.get());

        std::ofstream os("/tmp/TestData1_thrift.bin", std::ios::binary);
        uint8_t* bytePtr = nullptr;
        uint32_t sz = 0;
        buffer->getBuffer(&bytePtr, &sz);
        os.write(reinterpret_cast<const char*>(bytePtr),sz);
        os.close();

        return ByteBuffer{bytePtr, bytePtr+sz};
    }
    
    void read(const ByteBuffer& bytes)
    {
        shared_ptr<TMemoryBuffer> buffer = std::make_shared<TMemoryBuffer>();
        buffer->resetBuffer(const_cast<uint8_t*>(bytes.data()), bytes.size());

        shared_ptr<TBinaryProtocol> protocol = std::make_shared<TBinaryProtocol>(buffer);

        ImageFragmentList ifl;
        ifl.read(protocol.get());

        assert(ifl.frame.id == frame_id);
        assert(ifl.totalCount == total_count);
        assert(ifl.accumCount == accum_count);

        assert(ifl.fragments.size()==2);
        assert(ifl.fragments[0].key == frag_key1);
        assert(ifl.fragments[1].key == frag_key2);
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
