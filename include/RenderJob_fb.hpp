// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RENDERJOB_SPEEDRACER_FB_H_
#define FLATBUFFERS_GENERATED_RENDERJOB_SPEEDRACER_FB_H_

#include "flatbuffers/flatbuffers.h"

namespace speedracer_fb {

struct Vector3f;

struct Color3f;

struct Matrix4f;

struct Viewport;

struct BoundingBox2i;

struct BoundingBox3f;

struct DataBuffer;

struct FrameID;

struct ImageFragmentBuffers;

struct ImageFragmentInfo;

struct ImageFragmentList;

enum class DataBufferFormat : int8_t {
  BUFFER_NONE = 0,
  BUFFER_RGB_8 = 1,
  BUFFER_RGBA_8 = 2,
  BUFFER_UINT_16_LE = 3,
  BUFFER_UINT_16_BE = 4,
  BUFFER_FLOAT_32_LE = 5,
  MIN = BUFFER_NONE,
  MAX = BUFFER_FLOAT_32_LE
};

inline DataBufferFormat (&EnumValuesDataBufferFormat())[6] {
  static DataBufferFormat values[] = {
    DataBufferFormat::BUFFER_NONE,
    DataBufferFormat::BUFFER_RGB_8,
    DataBufferFormat::BUFFER_RGBA_8,
    DataBufferFormat::BUFFER_UINT_16_LE,
    DataBufferFormat::BUFFER_UINT_16_BE,
    DataBufferFormat::BUFFER_FLOAT_32_LE
  };
  return values;
}

inline const char **EnumNamesDataBufferFormat() {
  static const char *names[] = {
    "BUFFER_NONE",
    "BUFFER_RGB_8",
    "BUFFER_RGBA_8",
    "BUFFER_UINT_16_LE",
    "BUFFER_UINT_16_BE",
    "BUFFER_FLOAT_32_LE",
    nullptr
  };
  return names;
}

inline const char *EnumNameDataBufferFormat(DataBufferFormat e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesDataBufferFormat()[index];
}

MANUALLY_ALIGNED_STRUCT(4) Vector3f FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vector3f() {
    memset(this, 0, sizeof(Vector3f));
  }
  Vector3f(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
STRUCT_END(Vector3f, 12);

MANUALLY_ALIGNED_STRUCT(4) Color3f FLATBUFFERS_FINAL_CLASS {
 private:
  float r_;
  float g_;
  float b_;

 public:
  Color3f() {
    memset(this, 0, sizeof(Color3f));
  }
  Color3f(float _r, float _g, float _b)
      : r_(flatbuffers::EndianScalar(_r)),
        g_(flatbuffers::EndianScalar(_g)),
        b_(flatbuffers::EndianScalar(_b)) {
  }
  float r() const {
    return flatbuffers::EndianScalar(r_);
  }
  float g() const {
    return flatbuffers::EndianScalar(g_);
  }
  float b() const {
    return flatbuffers::EndianScalar(b_);
  }
};
STRUCT_END(Color3f, 12);

MANUALLY_ALIGNED_STRUCT(4) Matrix4f FLATBUFFERS_FINAL_CLASS {
 private:
  Vector3f basis_x_;
  Vector3f basis_y_;
  Vector3f t_;
  float s_;

 public:
  Matrix4f() {
    memset(this, 0, sizeof(Matrix4f));
  }
  Matrix4f(const Vector3f &_basis_x, const Vector3f &_basis_y, const Vector3f &_t, float _s)
      : basis_x_(_basis_x),
        basis_y_(_basis_y),
        t_(_t),
        s_(flatbuffers::EndianScalar(_s)) {
  }
  const Vector3f &basis_x() const {
    return basis_x_;
  }
  const Vector3f &basis_y() const {
    return basis_y_;
  }
  const Vector3f &t() const {
    return t_;
  }
  float s() const {
    return flatbuffers::EndianScalar(s_);
  }
};
STRUCT_END(Matrix4f, 40);

MANUALLY_ALIGNED_STRUCT(4) Viewport FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t width_;
  int32_t height_;

 public:
  Viewport() {
    memset(this, 0, sizeof(Viewport));
  }
  Viewport(int32_t _width, int32_t _height)
      : width_(flatbuffers::EndianScalar(_width)),
        height_(flatbuffers::EndianScalar(_height)) {
  }
  int32_t width() const {
    return flatbuffers::EndianScalar(width_);
  }
  int32_t height() const {
    return flatbuffers::EndianScalar(height_);
  }
};
STRUCT_END(Viewport, 8);

MANUALLY_ALIGNED_STRUCT(4) BoundingBox2i FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t xmin_;
  int32_t xmax_;
  int32_t ymin_;
  int32_t ymax_;

 public:
  BoundingBox2i() {
    memset(this, 0, sizeof(BoundingBox2i));
  }
  BoundingBox2i(int32_t _xmin, int32_t _xmax, int32_t _ymin, int32_t _ymax)
      : xmin_(flatbuffers::EndianScalar(_xmin)),
        xmax_(flatbuffers::EndianScalar(_xmax)),
        ymin_(flatbuffers::EndianScalar(_ymin)),
        ymax_(flatbuffers::EndianScalar(_ymax)) {
  }
  int32_t xmin() const {
    return flatbuffers::EndianScalar(xmin_);
  }
  int32_t xmax() const {
    return flatbuffers::EndianScalar(xmax_);
  }
  int32_t ymin() const {
    return flatbuffers::EndianScalar(ymin_);
  }
  int32_t ymax() const {
    return flatbuffers::EndianScalar(ymax_);
  }
};
STRUCT_END(BoundingBox2i, 16);

MANUALLY_ALIGNED_STRUCT(4) BoundingBox3f FLATBUFFERS_FINAL_CLASS {
 private:
  float xmin_;
  float xmax_;
  float ymin_;
  float ymax_;
  float zmin_;
  float zmax_;

 public:
  BoundingBox3f() {
    memset(this, 0, sizeof(BoundingBox3f));
  }
  BoundingBox3f(float _xmin, float _xmax, float _ymin, float _ymax, float _zmin, float _zmax)
      : xmin_(flatbuffers::EndianScalar(_xmin)),
        xmax_(flatbuffers::EndianScalar(_xmax)),
        ymin_(flatbuffers::EndianScalar(_ymin)),
        ymax_(flatbuffers::EndianScalar(_ymax)),
        zmin_(flatbuffers::EndianScalar(_zmin)),
        zmax_(flatbuffers::EndianScalar(_zmax)) {
  }
  float xmin() const {
    return flatbuffers::EndianScalar(xmin_);
  }
  float xmax() const {
    return flatbuffers::EndianScalar(xmax_);
  }
  float ymin() const {
    return flatbuffers::EndianScalar(ymin_);
  }
  float ymax() const {
    return flatbuffers::EndianScalar(ymax_);
  }
  float zmin() const {
    return flatbuffers::EndianScalar(zmin_);
  }
  float zmax() const {
    return flatbuffers::EndianScalar(zmax_);
  }
};
STRUCT_END(BoundingBox3f, 24);

struct DataBuffer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_FORMAT = 4,
    VT_DATA = 6
  };
  DataBufferFormat format() const {
    return static_cast<DataBufferFormat>(GetField<int8_t>(VT_FORMAT, 0));
  }
  const flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_FORMAT) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.Verify(data()) &&
           verifier.EndTable();
  }
};

struct DataBufferBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_format(DataBufferFormat format) {
    fbb_.AddElement<int8_t>(DataBuffer::VT_FORMAT, static_cast<int8_t>(format), 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(DataBuffer::VT_DATA, data);
  }
  explicit DataBufferBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  DataBufferBuilder &operator=(const DataBufferBuilder &);
  flatbuffers::Offset<DataBuffer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<DataBuffer>(end);
    return o;
  }
};

inline flatbuffers::Offset<DataBuffer> CreateDataBuffer(
    flatbuffers::FlatBufferBuilder &_fbb,
    DataBufferFormat format = DataBufferFormat::BUFFER_NONE,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0) {
  DataBufferBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_format(format);
  return builder_.Finish();
}

inline flatbuffers::Offset<DataBuffer> CreateDataBufferDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    DataBufferFormat format = DataBufferFormat::BUFFER_NONE,
    const std::vector<uint8_t> *data = nullptr) {
  return speedracer_fb::CreateDataBuffer(
      _fbb,
      format,
      data ? _fbb.CreateVector<uint8_t>(*data) : 0);
}

struct FrameID FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  const flatbuffers::String *id() const {
    return GetPointer<const flatbuffers::String *>(VT_ID);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ID) &&
           verifier.Verify(id()) &&
           verifier.EndTable();
  }
};

struct FrameIDBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(flatbuffers::Offset<flatbuffers::String> id) {
    fbb_.AddOffset(FrameID::VT_ID, id);
  }
  explicit FrameIDBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FrameIDBuilder &operator=(const FrameIDBuilder &);
  flatbuffers::Offset<FrameID> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FrameID>(end);
    return o;
  }
};

inline flatbuffers::Offset<FrameID> CreateFrameID(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> id = 0) {
  FrameIDBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<FrameID> CreateFrameIDDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *id = nullptr) {
  return speedracer_fb::CreateFrameID(
      _fbb,
      id ? _fbb.CreateString(id) : 0);
}

struct ImageFragmentBuffers FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_EXTENTS = 4,
    VT_PIXELS = 6,
    VT_DEPTH = 8
  };
  const Viewport *extents() const {
    return GetStruct<const Viewport *>(VT_EXTENTS);
  }
  const DataBuffer *pixels() const {
    return GetPointer<const DataBuffer *>(VT_PIXELS);
  }
  const DataBuffer *depth() const {
    return GetPointer<const DataBuffer *>(VT_DEPTH);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyFieldRequired<Viewport>(verifier, VT_EXTENTS) &&
           VerifyOffset(verifier, VT_PIXELS) &&
           verifier.VerifyTable(pixels()) &&
           VerifyOffset(verifier, VT_DEPTH) &&
           verifier.VerifyTable(depth()) &&
           verifier.EndTable();
  }
};

struct ImageFragmentBuffersBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_extents(const Viewport *extents) {
    fbb_.AddStruct(ImageFragmentBuffers::VT_EXTENTS, extents);
  }
  void add_pixels(flatbuffers::Offset<DataBuffer> pixels) {
    fbb_.AddOffset(ImageFragmentBuffers::VT_PIXELS, pixels);
  }
  void add_depth(flatbuffers::Offset<DataBuffer> depth) {
    fbb_.AddOffset(ImageFragmentBuffers::VT_DEPTH, depth);
  }
  explicit ImageFragmentBuffersBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ImageFragmentBuffersBuilder &operator=(const ImageFragmentBuffersBuilder &);
  flatbuffers::Offset<ImageFragmentBuffers> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ImageFragmentBuffers>(end);
    fbb_.Required(o, ImageFragmentBuffers::VT_EXTENTS);
    return o;
  }
};

inline flatbuffers::Offset<ImageFragmentBuffers> CreateImageFragmentBuffers(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Viewport *extents = 0,
    flatbuffers::Offset<DataBuffer> pixels = 0,
    flatbuffers::Offset<DataBuffer> depth = 0) {
  ImageFragmentBuffersBuilder builder_(_fbb);
  builder_.add_depth(depth);
  builder_.add_pixels(pixels);
  builder_.add_extents(extents);
  return builder_.Finish();
}

struct ImageFragmentInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_KEY = 4,
    VT_BOUNDS = 6,
    VT_ISOPAQUE = 8
  };
  const flatbuffers::String *key() const {
    return GetPointer<const flatbuffers::String *>(VT_KEY);
  }
  const BoundingBox2i *bounds() const {
    return GetStruct<const BoundingBox2i *>(VT_BOUNDS);
  }
  bool isOpaque() const {
    return GetField<uint8_t>(VT_ISOPAQUE, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_KEY) &&
           verifier.Verify(key()) &&
           VerifyField<BoundingBox2i>(verifier, VT_BOUNDS) &&
           VerifyField<uint8_t>(verifier, VT_ISOPAQUE) &&
           verifier.EndTable();
  }
};

struct ImageFragmentInfoBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_key(flatbuffers::Offset<flatbuffers::String> key) {
    fbb_.AddOffset(ImageFragmentInfo::VT_KEY, key);
  }
  void add_bounds(const BoundingBox2i *bounds) {
    fbb_.AddStruct(ImageFragmentInfo::VT_BOUNDS, bounds);
  }
  void add_isOpaque(bool isOpaque) {
    fbb_.AddElement<uint8_t>(ImageFragmentInfo::VT_ISOPAQUE, static_cast<uint8_t>(isOpaque), 0);
  }
  explicit ImageFragmentInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ImageFragmentInfoBuilder &operator=(const ImageFragmentInfoBuilder &);
  flatbuffers::Offset<ImageFragmentInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ImageFragmentInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<ImageFragmentInfo> CreateImageFragmentInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> key = 0,
    const BoundingBox2i *bounds = 0,
    bool isOpaque = false) {
  ImageFragmentInfoBuilder builder_(_fbb);
  builder_.add_bounds(bounds);
  builder_.add_key(key);
  builder_.add_isOpaque(isOpaque);
  return builder_.Finish();
}

inline flatbuffers::Offset<ImageFragmentInfo> CreateImageFragmentInfoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *key = nullptr,
    const BoundingBox2i *bounds = 0,
    bool isOpaque = false) {
  return speedracer_fb::CreateImageFragmentInfo(
      _fbb,
      key ? _fbb.CreateString(key) : 0,
      bounds,
      isOpaque);
}

struct ImageFragmentList FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_FRAME = 4,
    VT_FRAGMENTS = 6,
    VT_TOTALCOUNT = 8,
    VT_ACCUMCOUNT = 10
  };
  const FrameID *frame() const {
    return GetPointer<const FrameID *>(VT_FRAME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<ImageFragmentInfo>> *fragments() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<ImageFragmentInfo>> *>(VT_FRAGMENTS);
  }
  int32_t totalCount() const {
    return GetField<int32_t>(VT_TOTALCOUNT, 0);
  }
  int32_t accumCount() const {
    return GetField<int32_t>(VT_ACCUMCOUNT, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FRAME) &&
           verifier.VerifyTable(frame()) &&
           VerifyOffset(verifier, VT_FRAGMENTS) &&
           verifier.Verify(fragments()) &&
           verifier.VerifyVectorOfTables(fragments()) &&
           VerifyField<int32_t>(verifier, VT_TOTALCOUNT) &&
           VerifyField<int32_t>(verifier, VT_ACCUMCOUNT) &&
           verifier.EndTable();
  }
};

struct ImageFragmentListBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_frame(flatbuffers::Offset<FrameID> frame) {
    fbb_.AddOffset(ImageFragmentList::VT_FRAME, frame);
  }
  void add_fragments(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ImageFragmentInfo>>> fragments) {
    fbb_.AddOffset(ImageFragmentList::VT_FRAGMENTS, fragments);
  }
  void add_totalCount(int32_t totalCount) {
    fbb_.AddElement<int32_t>(ImageFragmentList::VT_TOTALCOUNT, totalCount, 0);
  }
  void add_accumCount(int32_t accumCount) {
    fbb_.AddElement<int32_t>(ImageFragmentList::VT_ACCUMCOUNT, accumCount, 0);
  }
  explicit ImageFragmentListBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ImageFragmentListBuilder &operator=(const ImageFragmentListBuilder &);
  flatbuffers::Offset<ImageFragmentList> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ImageFragmentList>(end);
    return o;
  }
};

inline flatbuffers::Offset<ImageFragmentList> CreateImageFragmentList(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<FrameID> frame = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ImageFragmentInfo>>> fragments = 0,
    int32_t totalCount = 0,
    int32_t accumCount = 0) {
  ImageFragmentListBuilder builder_(_fbb);
  builder_.add_accumCount(accumCount);
  builder_.add_totalCount(totalCount);
  builder_.add_fragments(fragments);
  builder_.add_frame(frame);
  return builder_.Finish();
}

inline flatbuffers::Offset<ImageFragmentList> CreateImageFragmentListDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<FrameID> frame = 0,
    const std::vector<flatbuffers::Offset<ImageFragmentInfo>> *fragments = nullptr,
    int32_t totalCount = 0,
    int32_t accumCount = 0) {
  return speedracer_fb::CreateImageFragmentList(
      _fbb,
      frame,
      fragments ? _fbb.CreateVector<flatbuffers::Offset<ImageFragmentInfo>>(*fragments) : 0,
      totalCount,
      accumCount);
}

}  // namespace speedracer_fb

#endif  // FLATBUFFERS_GENERATED_RENDERJOB_SPEEDRACER_FB_H_
