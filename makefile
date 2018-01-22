# ----------------------------------------------------------------------------
# Makefile for building avro data models
#
# PREFIX = /usr/local/include/data-model-lib

AVRO_HPP := $(patsubst schemata/%.avsc,include/%_avro.hpp,$(wildcard schemata/*.avsc))
FLATBUFFERS_HPP := $(patsubst schemata/%.fbs,include/%_fb.hpp,$(wildcard schemata/*.fbs))
CPP_SRC := $(wildcard src/cpp/*.cpp)
CPP_EXE := $(patsubst src/cpp/%.cpp,bin_cpp/%,$(CPP_SRC))

vpath %.cpp src/cpp

all: $(AVRO_HPP) $(FLATBUFFERS_HPP) $(CPP_EXE) 

$(filter include/%_avro.hpp,$(AVRO_HPP)) : include/%_avro.hpp : schemata/%.avsc
	avrogencpp -i $< -o $@ -n speedracer_avro

$(filter include/%_fb.hpp,$(FLATBUFFERS_HPP)) : include/%_fb.hpp : schemata/%.fbs
	flatc --cpp --binary --scoped-enums -o include -I include $<
	mv include/$(*)_generated.h $@

$(CPP_EXE) : $(CPP_SRC)
	clang++ -g -std=c++14 -I src -I include $< -o $@ -lavrocpp_s

.PHONY: install clean
#install:
#	mkdir -p $(PREFIX)
#	install include/*.hpp $(PREFIX)

clean:
	rm -f include/*.hpp $(CPP_EXE)
	rm -rf bin_cpp/*.dSYM
