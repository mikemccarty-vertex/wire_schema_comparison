//
// Created by Dan Murray on 6/20/16.
//

#pragma once

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wimplicit-fallthrough"
#pragma clang diagnostic ignored "-Wdocumentation-unknown-command"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
#endif
#include <avro/Decoder.hh>
#include <avro/Compiler.hh>
#include <avro/Encoder.hh>
#include <avro/Specific.hh>
#include <avro/Stream.hh>
#include <avro/ValidSchema.hh>
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

namespace speedracer
{
    namespace avroutils
    {
        template<typename T>
        void encode(std::vector<uint8_t>& bytes, const T &t)
        {
            auto out = ::avro::memoryOutputStream();
            ::avro::EncoderPtr e = ::avro::binaryEncoder();
            e->init(*out);

            ::avro::encode(*e, t);
            e->flush();
            out->flush();

            bytes.clear();

            const uint8_t* pData = nullptr;
            size_t nData = 0;
            auto in = ::avro::memoryInputStream(*out);
            while ( in->next(&pData, &nData) )
                bytes.insert(bytes.end(), pData, pData+nData);
        }

        // DEPRECATED
        template<typename T>
        inline bool encode(const std::shared_ptr<std::vector<uint8_t>> &bytes, const T &t)
        { encode(*bytes.get(), t); return true; }

        template<typename T>
        bool decode(T &t, const std::vector<uint8_t> &bytes)
        {
            auto in = ::avro::memoryInputStream(bytes.data(), bytes.size());
            ::avro::DecoderPtr decoder = ::avro::binaryDecoder();
            decoder->init(*in);
            ::avro::decode(*decoder, t);

            return true;
        }
    }
}
