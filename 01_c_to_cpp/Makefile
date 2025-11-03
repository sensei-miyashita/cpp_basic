# Makefile for 01_c_to_cpp

# Compiler settings
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20 -g -DDEBUG

# Build directory
BUILD_DIR = build

# Target and object files
TARGET = $(BUILD_DIR)/c_to_cpp
OBJECTS = $(BUILD_DIR)/main.o $(BUILD_DIR)/vector2d.o

# Phony targets (not actual files, always execute when called)
.PHONY: default clean run

# Default target
default: $(TARGET)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build c_to_cpp program
$(TARGET): $(OBJECTS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Pattern rule for .cpp to .o in build directory
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Dependencies (header file dependencies only)
$(BUILD_DIR)/main.o: vector2d.h
$(BUILD_DIR)/vector2d.o: vector2d.h

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)