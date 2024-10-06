CXX = g++
CXXFLAGS = -Wall -Werror

TARGET = redirector

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	rm -f $(TARGET)
