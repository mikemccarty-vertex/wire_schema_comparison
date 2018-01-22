# ----------------------------------------------------------------------------
# Makefile for building avro data models
#
PREFIX = /usr/local/include/data-model-lib

AVRO_HPP := $(patsubst schemata/%.avsc,%_avro.hpp,$(wildcard schemata/*.avsc))
FLATBUFFERS_HPP := $(patsubst schemata/%.fbs,%_fb.hpp,$(wildcard schemata/*.fbs))

all: $(AVRO_HPP) $(FLATBUFFERS_HPP)

$(filter %_avro.hpp,$(AVRO_HPP)) : %_avro.hpp : schemata/%.avsc
	avrogencpp -i $< -o include/$@ -n speedracer_avro

$(filter %_fb.hpp,$(FLATBUFFERS_HPP)) : %_fb.hpp : schemata/%.fbs
	flatc --cpp --binary --scoped-enums -o include -I include $<
	mv include/$(*)_generated.h include/$@

.PHONY: install clean
install:
	mkdir -p $(PREFIX)
	install include/*.hpp $(PREFIX)

clean:
	rm include/*.hpp
