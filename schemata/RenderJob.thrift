namespace cpp speedracer_thrift


enum DataBufferFormat
{
    BUFFER_NONE = 0,
    BUFFER_RGB_8,
    BUFFER_RGBA_8,
    BUFFER_UINT_16_LE,
    BUFFER_UINT_16_BE,
    BUFFER_FLOAT_32_LE
}

struct Vector3f
{
    1 : double x = 0;
    2 : double y = 0;
    3 : double z = 0;
}

struct Color3f
{
    1 : double r = 0;
    2 : double g = 0;
    3 : double b = 0;
}

struct Matrix4f
{
    1 : Vector3f basis_x;
    2 : Vector3f basis_y;
    3 : Vector3f t;
    4 : double s;
}

struct Viewport
{
    1 : i32 width = 0;
    2 : i32 height = 0;
}

struct BoundingBox2i
{
    1 : i32 xmin = 2147483647;
    2 : i32 xmax = -2147483648;

    3 : i32 ymin = 2147483647;
    4 : i32 ymax = -2147483648;
}

struct BoundingBox3f
{
    1 : double xmin = 1e38;
    2 : double xmax = -1e38;

    3 : double ymin = 1e38;
    4 : double ymax = -1e38;

    5 : double zmin = 1e38;
    6 : double zmax = -1e38;
}

struct DataBuffer
{
    1 : DataBufferFormat format = DataBufferFormat.BUFFER_NONE;
    2 : binary data;
}

struct FrameID
{
    1 : string id;
}


struct ImageFragmentBuffers
{
    1 : Viewport   extents;
    2 : DataBuffer pixels;
    3 : optional DataBuffer depth;
}

struct ImageFragmentInfo
{
    1 : string        key;
    2 : BoundingBox2i bounds;
    3 : bool          isOpaque = false;
}


typedef list<ImageFragmentInfo> ImageFragmentInfo_list;

struct ImageFragmentList
{
    1 : required FrameID        frame;
    2 : required ImageFragmentInfo_list  fragments;
    3 : i32                     totalCount = 0;
    4 : i32                     accumCount = 0;
}
