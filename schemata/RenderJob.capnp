@0x8a69b983970c1f1e;

using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("speedracer_capnp");


enum DataBufferFormat @0xbc3ffa1c6e372184
{
    eBUFFERNONE @0;
    eBUFFERRGB8 @1;
    eBUFFERRGBA8 @2;
    eBUFFERUINT16LE @3;
    eBUFFERUINT16BE @4;
    eBUFFERFLOAT32LE @5;
}

struct Vector3f @0xbc3ffa1c6e372185
{
    v @0 :Void;
    x @1 :Float32;
    y @2 :Float32;
    z @3 :Float32;
}

struct Color3f  @0xbc3ffa1c6e372186
{
    v @0 :Void;
    r @1 :Float32;
    g @2 :Float32;
    b @3 :Float32;
}

struct Matrix4f  @0xbc3ffa1c6e372187
{
    v @0 :Void;
    basisX @1 :Vector3f;
    basisY @2 :Vector3f;
    t @3 :Vector3f;
    s @4 :Float32;
}

struct Viewport @0xbc3ffa1c6e372188
{
    v @0 :Void;
    width @1 :Int32;
    height @2 :Int32;
}

struct BoundingBox2i @0xbc3ffa1c6e372189
{
    v @0 :Void;
    xmin @1 :Int32;
    xmax @2 :Int32;

    ymin @3 :Int32;
    ymax @4 :Int32;
}

struct BoundingBox3f @0xbc3ffa1c6e372190
{
    v @0 :Void;
    xmin @1 :Float32;
    xmax @2 :Float32;

    ymin @3 :Float32;
    ymax @4 :Float32;

    zmin @5 :Float32;
    zmax @6 :Float32;
}

struct DataBuffer @0xbc3ffa1c6e372191
{
    v @0 :Void;
    format @1 :DataBufferFormat;
    data @2 :Data;
}

struct FrameID @0xbc3ffa1c6e372192
{
    v @0 :Void;
    id @1 :Text;
}


struct ImageFragmentBuffers @0xbc3ffa1c6e372193
{
    v @0 :Void;
    extents @1 :Viewport;
    pixels @2 :DataBuffer;
    depth @3 :DataBuffer;
}

struct ImageFragmentInfo @0xbc3ffa1c6e372194
{
    v @0 :Void;
    key @1 :Text;
    bounds @2 :BoundingBox2i;
    isOpaque @3 :Bool;
}


struct ImageFragmentList @0xbc3ffa1c6e372195
{
    v @0 :Void;
    frame @1 :FrameID;
    fragments @2 :List(ImageFragmentInfo);
    totalCount @3 :Int32;
    accumCount @4 :Int32;
}
