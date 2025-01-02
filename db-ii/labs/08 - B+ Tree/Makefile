CXX = g++

CXXFLAGS = -Wall -g -I./src -std=c++20

SRC_DIR = src
OBJ_DIR = obj

SRC_FILES = main.cpp $(wildcard $(SRC_DIR)/*.cpp)

OBJ_FILES = $(SRC_FILES:.cpp=.o)

EXEC = BPTree

$(EXEC): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ_FILES)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES) $(EXEC)

.PHONY: clean
