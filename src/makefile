# template from https://github.com/TheNetAdmin/Makefile-Templates/blob/master/MediumProject/Template/Makefile

TARGET := math
OUTDIR := ../bin
DIR_OBJ := ../obj
DEPENDS := $(OUTDIR)/lib_temp.o $(OUTDIR)/matrix.o
 

GXX := g++
GXXFLAGS := -std=c++11 -Wall -Wextra -Wunreachable-code -Wswitch-default

default: all

$(OUTDIR)/lib_temp.o: 
	$(GXX) $(GXXFLAGS) -c lib_temp/lib_temp.cpp -o $(OUTDIR)/lib_temp.o

$(OUTDIR)/matrix.o: 
	$(GXX) $(GXXFLAGS) -c math/matrix.cpp -o $(OUTDIR)/matrix.o

all: $(DEPENDS) 
	$(GXX) $(GXXFLAGS) -o $(OUTDIR)/$(TARGET) main.cpp $(DEPENDS)

$(OUTDIR):
	@echo "creating folder $(OUTDIR)"
	mkdir $(OUTDIR)

debug: GXXFLAGS += -g -ggdb
debug: OUTDIR = ../bin/debug
debug: DEPENDS = $(OUTDIR)/lib_temp.o $(OUTDIR)/matrix.o
debug: all

run:
	../bin/$(TARGET)

clean:
	rm -r ../bin/*

