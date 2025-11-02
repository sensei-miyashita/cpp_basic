# Makefile template for cpp_basic project

# Compiler settings
CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -std=c99 -g -DDEBUG
CXXFLAGS = -Wall -Wextra -std=c++20 -g -DDEBUG

# Build directory
BUILD_DIR = build

# Sample target: hello.cpp -> hello
HELLO_TARGET = $(BUILD_DIR)/hello

# Phony targets (not actual files, always execute when called)
.PHONY: default clean run

# Default target
default: $(HELLO_TARGET)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Sample target for hello.cpp
$(HELLO_TARGET): hello.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

# Run hello program
run: $(HELLO_TARGET)
	./$(HELLO_TARGET)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Implicit rules (suffix rules) - copy these to subdirectory Makefiles
.SUFFIXES: .c .cpp .o

# Pattern rule for C files to object files in build directory
$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Pattern rule for C++ files to object files in build directory  
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Pattern rule for C++ files to executables in build directory
$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<
