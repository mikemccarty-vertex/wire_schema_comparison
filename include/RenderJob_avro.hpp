/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef INCLUDE_RENDERJOB_AVRO_HPP_711953826__H_
#define INCLUDE_RENDERJOB_AVRO_HPP_711953826__H_


#include <sstream>
#include "boost/any.hpp"
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace speedracer_avro {
struct Vector3f {
    float x;
    float y;
    float z;
    Vector3f() :
        x(float()),
        y(float()),
        z(float())
        { }
};

struct Color3f {
    float r;
    float g;
    float b;
    Color3f() :
        r(float()),
        g(float()),
        b(float())
        { }
};

struct Matrix4f {
    std::vector<float > matrix;
    Matrix4f() :
        matrix(std::vector<float >())
        { }
};

struct BoundingBox3f {
    float xmin;
    float xmax;
    float ymin;
    float ymax;
    float zmin;
    float zmax;
    BoundingBox3f() :
        xmin(float()),
        xmax(float()),
        ymin(float()),
        ymax(float()),
        zmin(float()),
        zmax(float())
        { }
};

struct BoundingBox2i {
    int32_t xmin;
    int32_t xmax;
    int32_t ymin;
    int32_t ymax;
    BoundingBox2i() :
        xmin(int32_t()),
        xmax(int32_t()),
        ymin(int32_t()),
        ymax(int32_t())
        { }
};

struct Viewport {
    int32_t width;
    int32_t height;
    Viewport() :
        width(int32_t()),
        height(int32_t())
        { }
};

enum DataBufferFormat {
    BUFFER_NONE,
    BUFFER_RGB_8,
    BUFFER_RGBA_8,
    BUFFER_UINT_16_LE,
    BUFFER_UINT_16_BE,
    BUFFER_FLOAT_32_LE,
};

struct DataBuffer {
    DataBufferFormat format;
    std::vector<uint8_t> data;
    DataBuffer() :
        format(DataBufferFormat()),
        data(std::vector<uint8_t>())
        { }
};

struct ImageFragmentBuffers {
    Viewport extents;
    DataBuffer pixels;
    DataBuffer depth;
    ImageFragmentBuffers() :
        extents(Viewport()),
        pixels(DataBuffer()),
        depth(DataBuffer())
        { }
};

struct FrameID {
    std::string id;
    FrameID() :
        id(std::string())
        { }
};

struct ImageFragmentInfo {
    std::string key;
    BoundingBox2i bounds;
    bool isOpaque;
    ImageFragmentInfo() :
        key(std::string()),
        bounds(BoundingBox2i()),
        isOpaque(bool())
        { }
};

struct ImageFragmentList {
    FrameID frame;
    std::vector<ImageFragmentInfo > fragments;
    int32_t totalCount;
    int32_t accumCount;
    ImageFragmentList() :
        frame(FrameID()),
        fragments(std::vector<ImageFragmentInfo >()),
        totalCount(int32_t()),
        accumCount(int32_t())
        { }
};

struct _RenderJob_avsc_Union__0__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    Vector3f get_Vector3f() const;
    void set_Vector3f(const Vector3f& v);
    Color3f get_Color3f() const;
    void set_Color3f(const Color3f& v);
    Matrix4f get_Matrix4f() const;
    void set_Matrix4f(const Matrix4f& v);
    BoundingBox3f get_BoundingBox3f() const;
    void set_BoundingBox3f(const BoundingBox3f& v);
    BoundingBox2i get_BoundingBox2i() const;
    void set_BoundingBox2i(const BoundingBox2i& v);
    Viewport get_Viewport() const;
    void set_Viewport(const Viewport& v);
    DataBufferFormat get_DataBufferFormat() const;
    void set_DataBufferFormat(const DataBufferFormat& v);
    DataBuffer get_DataBuffer() const;
    void set_DataBuffer(const DataBuffer& v);
    ImageFragmentBuffers get_ImageFragmentBuffers() const;
    void set_ImageFragmentBuffers(const ImageFragmentBuffers& v);
    FrameID get_FrameID() const;
    void set_FrameID(const FrameID& v);
    ImageFragmentInfo get_ImageFragmentInfo() const;
    void set_ImageFragmentInfo(const ImageFragmentInfo& v);
    ImageFragmentList get_ImageFragmentList() const;
    void set_ImageFragmentList(const ImageFragmentList& v);
    _RenderJob_avsc_Union__0__();
};

inline
Vector3f _RenderJob_avsc_Union__0__::get_Vector3f() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Vector3f >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_Vector3f(const Vector3f& v) {
    idx_ = 0;
    value_ = v;
}

inline
Color3f _RenderJob_avsc_Union__0__::get_Color3f() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Color3f >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_Color3f(const Color3f& v) {
    idx_ = 1;
    value_ = v;
}

inline
Matrix4f _RenderJob_avsc_Union__0__::get_Matrix4f() const {
    if (idx_ != 2) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Matrix4f >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_Matrix4f(const Matrix4f& v) {
    idx_ = 2;
    value_ = v;
}

inline
BoundingBox3f _RenderJob_avsc_Union__0__::get_BoundingBox3f() const {
    if (idx_ != 3) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<BoundingBox3f >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_BoundingBox3f(const BoundingBox3f& v) {
    idx_ = 3;
    value_ = v;
}

inline
BoundingBox2i _RenderJob_avsc_Union__0__::get_BoundingBox2i() const {
    if (idx_ != 4) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<BoundingBox2i >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_BoundingBox2i(const BoundingBox2i& v) {
    idx_ = 4;
    value_ = v;
}

inline
Viewport _RenderJob_avsc_Union__0__::get_Viewport() const {
    if (idx_ != 5) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Viewport >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_Viewport(const Viewport& v) {
    idx_ = 5;
    value_ = v;
}

inline
DataBufferFormat _RenderJob_avsc_Union__0__::get_DataBufferFormat() const {
    if (idx_ != 6) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<DataBufferFormat >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_DataBufferFormat(const DataBufferFormat& v) {
    idx_ = 6;
    value_ = v;
}

inline
DataBuffer _RenderJob_avsc_Union__0__::get_DataBuffer() const {
    if (idx_ != 7) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<DataBuffer >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_DataBuffer(const DataBuffer& v) {
    idx_ = 7;
    value_ = v;
}

inline
ImageFragmentBuffers _RenderJob_avsc_Union__0__::get_ImageFragmentBuffers() const {
    if (idx_ != 8) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ImageFragmentBuffers >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_ImageFragmentBuffers(const ImageFragmentBuffers& v) {
    idx_ = 8;
    value_ = v;
}

inline
FrameID _RenderJob_avsc_Union__0__::get_FrameID() const {
    if (idx_ != 9) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<FrameID >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_FrameID(const FrameID& v) {
    idx_ = 9;
    value_ = v;
}

inline
ImageFragmentInfo _RenderJob_avsc_Union__0__::get_ImageFragmentInfo() const {
    if (idx_ != 10) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ImageFragmentInfo >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_ImageFragmentInfo(const ImageFragmentInfo& v) {
    idx_ = 10;
    value_ = v;
}

inline
ImageFragmentList _RenderJob_avsc_Union__0__::get_ImageFragmentList() const {
    if (idx_ != 11) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ImageFragmentList >(value_);
}

inline
void _RenderJob_avsc_Union__0__::set_ImageFragmentList(const ImageFragmentList& v) {
    idx_ = 11;
    value_ = v;
}

inline _RenderJob_avsc_Union__0__::_RenderJob_avsc_Union__0__() : idx_(0), value_(Vector3f()) { }
}
namespace avro {
template<> struct codec_traits<speedracer_avro::Vector3f> {
    static void encode(Encoder& e, const speedracer_avro::Vector3f& v) {
        avro::encode(e, v.x);
        avro::encode(e, v.y);
        avro::encode(e, v.z);
    }
    static void decode(Decoder& d, speedracer_avro::Vector3f& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.x);
                    break;
                case 1:
                    avro::decode(d, v.y);
                    break;
                case 2:
                    avro::decode(d, v.z);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.x);
            avro::decode(d, v.y);
            avro::decode(d, v.z);
        }
    }
};

template<> struct codec_traits<speedracer_avro::Color3f> {
    static void encode(Encoder& e, const speedracer_avro::Color3f& v) {
        avro::encode(e, v.r);
        avro::encode(e, v.g);
        avro::encode(e, v.b);
    }
    static void decode(Decoder& d, speedracer_avro::Color3f& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.r);
                    break;
                case 1:
                    avro::decode(d, v.g);
                    break;
                case 2:
                    avro::decode(d, v.b);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.r);
            avro::decode(d, v.g);
            avro::decode(d, v.b);
        }
    }
};

template<> struct codec_traits<speedracer_avro::Matrix4f> {
    static void encode(Encoder& e, const speedracer_avro::Matrix4f& v) {
        avro::encode(e, v.matrix);
    }
    static void decode(Decoder& d, speedracer_avro::Matrix4f& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.matrix);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.matrix);
        }
    }
};

template<> struct codec_traits<speedracer_avro::BoundingBox3f> {
    static void encode(Encoder& e, const speedracer_avro::BoundingBox3f& v) {
        avro::encode(e, v.xmin);
        avro::encode(e, v.xmax);
        avro::encode(e, v.ymin);
        avro::encode(e, v.ymax);
        avro::encode(e, v.zmin);
        avro::encode(e, v.zmax);
    }
    static void decode(Decoder& d, speedracer_avro::BoundingBox3f& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.xmin);
                    break;
                case 1:
                    avro::decode(d, v.xmax);
                    break;
                case 2:
                    avro::decode(d, v.ymin);
                    break;
                case 3:
                    avro::decode(d, v.ymax);
                    break;
                case 4:
                    avro::decode(d, v.zmin);
                    break;
                case 5:
                    avro::decode(d, v.zmax);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.xmin);
            avro::decode(d, v.xmax);
            avro::decode(d, v.ymin);
            avro::decode(d, v.ymax);
            avro::decode(d, v.zmin);
            avro::decode(d, v.zmax);
        }
    }
};

template<> struct codec_traits<speedracer_avro::BoundingBox2i> {
    static void encode(Encoder& e, const speedracer_avro::BoundingBox2i& v) {
        avro::encode(e, v.xmin);
        avro::encode(e, v.xmax);
        avro::encode(e, v.ymin);
        avro::encode(e, v.ymax);
    }
    static void decode(Decoder& d, speedracer_avro::BoundingBox2i& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.xmin);
                    break;
                case 1:
                    avro::decode(d, v.xmax);
                    break;
                case 2:
                    avro::decode(d, v.ymin);
                    break;
                case 3:
                    avro::decode(d, v.ymax);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.xmin);
            avro::decode(d, v.xmax);
            avro::decode(d, v.ymin);
            avro::decode(d, v.ymax);
        }
    }
};

template<> struct codec_traits<speedracer_avro::Viewport> {
    static void encode(Encoder& e, const speedracer_avro::Viewport& v) {
        avro::encode(e, v.width);
        avro::encode(e, v.height);
    }
    static void decode(Decoder& d, speedracer_avro::Viewport& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.width);
                    break;
                case 1:
                    avro::decode(d, v.height);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.width);
            avro::decode(d, v.height);
        }
    }
};

template<> struct codec_traits<speedracer_avro::DataBufferFormat> {
    static void encode(Encoder& e, speedracer_avro::DataBufferFormat v) {
		if (v < speedracer_avro::BUFFER_NONE || v > speedracer_avro::BUFFER_FLOAT_32_LE)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for speedracer_avro::DataBufferFormat and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, speedracer_avro::DataBufferFormat& v) {
		size_t index = d.decodeEnum();
		if (index < speedracer_avro::BUFFER_NONE || index > speedracer_avro::BUFFER_FLOAT_32_LE)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for speedracer_avro::DataBufferFormat and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<speedracer_avro::DataBufferFormat>(index);
    }
};

template<> struct codec_traits<speedracer_avro::DataBuffer> {
    static void encode(Encoder& e, const speedracer_avro::DataBuffer& v) {
        avro::encode(e, v.format);
        avro::encode(e, v.data);
    }
    static void decode(Decoder& d, speedracer_avro::DataBuffer& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.format);
                    break;
                case 1:
                    avro::decode(d, v.data);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.format);
            avro::decode(d, v.data);
        }
    }
};

template<> struct codec_traits<speedracer_avro::ImageFragmentBuffers> {
    static void encode(Encoder& e, const speedracer_avro::ImageFragmentBuffers& v) {
        avro::encode(e, v.extents);
        avro::encode(e, v.pixels);
        avro::encode(e, v.depth);
    }
    static void decode(Decoder& d, speedracer_avro::ImageFragmentBuffers& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.extents);
                    break;
                case 1:
                    avro::decode(d, v.pixels);
                    break;
                case 2:
                    avro::decode(d, v.depth);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.extents);
            avro::decode(d, v.pixels);
            avro::decode(d, v.depth);
        }
    }
};

template<> struct codec_traits<speedracer_avro::FrameID> {
    static void encode(Encoder& e, const speedracer_avro::FrameID& v) {
        avro::encode(e, v.id);
    }
    static void decode(Decoder& d, speedracer_avro::FrameID& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.id);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.id);
        }
    }
};

template<> struct codec_traits<speedracer_avro::ImageFragmentInfo> {
    static void encode(Encoder& e, const speedracer_avro::ImageFragmentInfo& v) {
        avro::encode(e, v.key);
        avro::encode(e, v.bounds);
        avro::encode(e, v.isOpaque);
    }
    static void decode(Decoder& d, speedracer_avro::ImageFragmentInfo& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.key);
                    break;
                case 1:
                    avro::decode(d, v.bounds);
                    break;
                case 2:
                    avro::decode(d, v.isOpaque);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.key);
            avro::decode(d, v.bounds);
            avro::decode(d, v.isOpaque);
        }
    }
};

template<> struct codec_traits<speedracer_avro::ImageFragmentList> {
    static void encode(Encoder& e, const speedracer_avro::ImageFragmentList& v) {
        avro::encode(e, v.frame);
        avro::encode(e, v.fragments);
        avro::encode(e, v.totalCount);
        avro::encode(e, v.accumCount);
    }
    static void decode(Decoder& d, speedracer_avro::ImageFragmentList& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.frame);
                    break;
                case 1:
                    avro::decode(d, v.fragments);
                    break;
                case 2:
                    avro::decode(d, v.totalCount);
                    break;
                case 3:
                    avro::decode(d, v.accumCount);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.frame);
            avro::decode(d, v.fragments);
            avro::decode(d, v.totalCount);
            avro::decode(d, v.accumCount);
        }
    }
};

template<> struct codec_traits<speedracer_avro::_RenderJob_avsc_Union__0__> {
    static void encode(Encoder& e, speedracer_avro::_RenderJob_avsc_Union__0__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_Vector3f());
            break;
        case 1:
            avro::encode(e, v.get_Color3f());
            break;
        case 2:
            avro::encode(e, v.get_Matrix4f());
            break;
        case 3:
            avro::encode(e, v.get_BoundingBox3f());
            break;
        case 4:
            avro::encode(e, v.get_BoundingBox2i());
            break;
        case 5:
            avro::encode(e, v.get_Viewport());
            break;
        case 6:
            avro::encode(e, v.get_DataBufferFormat());
            break;
        case 7:
            avro::encode(e, v.get_DataBuffer());
            break;
        case 8:
            avro::encode(e, v.get_ImageFragmentBuffers());
            break;
        case 9:
            avro::encode(e, v.get_FrameID());
            break;
        case 10:
            avro::encode(e, v.get_ImageFragmentInfo());
            break;
        case 11:
            avro::encode(e, v.get_ImageFragmentList());
            break;
        }
    }
    static void decode(Decoder& d, speedracer_avro::_RenderJob_avsc_Union__0__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 12) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                speedracer_avro::Vector3f vv;
                avro::decode(d, vv);
                v.set_Vector3f(vv);
            }
            break;
        case 1:
            {
                speedracer_avro::Color3f vv;
                avro::decode(d, vv);
                v.set_Color3f(vv);
            }
            break;
        case 2:
            {
                speedracer_avro::Matrix4f vv;
                avro::decode(d, vv);
                v.set_Matrix4f(vv);
            }
            break;
        case 3:
            {
                speedracer_avro::BoundingBox3f vv;
                avro::decode(d, vv);
                v.set_BoundingBox3f(vv);
            }
            break;
        case 4:
            {
                speedracer_avro::BoundingBox2i vv;
                avro::decode(d, vv);
                v.set_BoundingBox2i(vv);
            }
            break;
        case 5:
            {
                speedracer_avro::Viewport vv;
                avro::decode(d, vv);
                v.set_Viewport(vv);
            }
            break;
        case 6:
            {
                speedracer_avro::DataBufferFormat vv;
                avro::decode(d, vv);
                v.set_DataBufferFormat(vv);
            }
            break;
        case 7:
            {
                speedracer_avro::DataBuffer vv;
                avro::decode(d, vv);
                v.set_DataBuffer(vv);
            }
            break;
        case 8:
            {
                speedracer_avro::ImageFragmentBuffers vv;
                avro::decode(d, vv);
                v.set_ImageFragmentBuffers(vv);
            }
            break;
        case 9:
            {
                speedracer_avro::FrameID vv;
                avro::decode(d, vv);
                v.set_FrameID(vv);
            }
            break;
        case 10:
            {
                speedracer_avro::ImageFragmentInfo vv;
                avro::decode(d, vv);
                v.set_ImageFragmentInfo(vv);
            }
            break;
        case 11:
            {
                speedracer_avro::ImageFragmentList vv;
                avro::decode(d, vv);
                v.set_ImageFragmentList(vv);
            }
            break;
        }
    }
};

}
#endif
