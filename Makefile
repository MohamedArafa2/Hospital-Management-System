CXX = g++
CXXFLAGS = -std=c++11 -Wall -I include
SRC = src/main.cpp
TARGET = hospital_management

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
