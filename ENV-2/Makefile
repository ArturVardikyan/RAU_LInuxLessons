CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
LDFLAGS = 

SRCS = ComplexNumber.cpp Sorting.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = main

all:	$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
