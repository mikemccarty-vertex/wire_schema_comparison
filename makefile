# ----------------------------------------------------------------------------
# Makefile for building avro data models
#
# PREFIX = /usr/local/include/data-model-lib

AVRO_HPP := $(patsubst schemata/%.avsc,include/%_avro.hpp,$(wildcard schemata/*.avsc))
FLATBUFFERS_HPP := $(patsubst schemata/%.fbs,include/%_fb.hpp,$(wildcard schemata/*.fbs))
THRIFT_HPP := $(patsubst schemata/%.thrift,include/%_thrift.hpp,$(wildcard schemata/*.thrift))
CPP_SRC := $(wildcard src/cpp/*.cpp)
CPP_EXE := $(patsubst src/cpp/%.cpp,bin_cpp/%,$(CPP_SRC))

vpath %.cpp src/cpp

all: $(AVRO_HPP) $(FLATBUFFERS_HPP) $(THRIFT_HPP) $(CPP_EXE) 
	echo CPP_EXE == $(CPP_EXE)

$(filter include/%_avro.hpp,$(AVRO_HPP)) : include/%_avro.hpp : schemata/%.avsc
	avrogencpp -i $< -o $@ -n speedracer_avro

$(filter include/%_fb.hpp,$(FLATBUFFERS_HPP)) : include/%_fb.hpp : schemata/%.fbs
	flatc --cpp --binary --scoped-enums -o include -I include $<
	mv include/$(*)_generated.h $@

$(filter include/%_thrift.hpp,$(THRIFT_HPP)) : include/%_thrift.hpp : schemata/%.thrift
	thrift --gen cpp:moveable_types,pure_enums,no_ostream_operators,no_default_operators -out include/speedracer_thrift -I include -I include/speedracer_thrift $<

bin_cpp/RenderJob_avro : src/cpp/RenderJob_avro.cpp
	clang++ -g -std=c++14 -I src/cpp -I include $< -o $@ -lavrocpp_s

bin_cpp/RenderJob_fb : src/cpp/RenderJob_fb.cpp
	clang++ -g -std=c++14 -I src/cpp -I include $< -o $@

bin_cpp/RenderJob_thrift : src/cpp/RenderJob_thrift.cpp
	clang++ -g -std=c++14 -I src/cpp -I include $< -o $@ -lthrift

.PHONY: install clean
#install:
#	mkdir -p $(PREFIX)
#	install include/*.hpp $(PREFIX)

clean:
	rm -f include/*.hpp include/speedracer_thrift/* $(CPP_EXE)
	rm -rf bin_cpp/*.dSYM
