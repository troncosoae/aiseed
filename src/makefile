# template from https://github.com/TheNetAdmin/Makefile-Templates/blob/master/MediumProject/Template/Makefile

TARGET := aiseed
BINS_DIR := ../bin
DEPENDS := $(BINS_DIR)/lib_temp.o $(BINS_DIR)/matrix.o
 

GXX := g++
GXXFLAGS := -std=c++11 -Wall -Wextra -Wunreachable-code -Wswitch-default

default: all

$(BINS_DIR)/lib_temp.o: | $(BINS_DIR)
	$(GXX) $(GXXFLAGS) -c lib_temp/lib_temp.cpp -o $(BINS_DIR)/lib_temp.o

$(BINS_DIR)/matrix.o: | $(BINS_DIR)
	$(GXX) $(GXXFLAGS) -c math/matrix.cpp -o $(BINS_DIR)/matrix.o

all: $(DEPENDS) 
	$(GXX) $(GXXFLAGS) -o $(BINS_DIR)/$(TARGET) main.cpp $(DEPENDS)

$(BINS_DIR):
	@echo "creating folder $(BINS_DIR)"
	mkdir $(BINS_DIR)

run:
	../bin/aiseed

clean:
	rm -r ../bin/*

