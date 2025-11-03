# Makefile for 00_struct_and_pointer

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g -DDEBUG

# Build directory
BUILD_DIR = build

# Target and object files
TARGET = $(BUILD_DIR)/struct_and_pointer
OBJECTS = $(BUILD_DIR)/main.o $(BUILD_DIR)/vector2d.o

# Phony targets (not actual files, always execute when called)
.PHONY: default clean run

# Default target
default: $(TARGET)

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build struct_and_pointer program
$(TARGET): $(OBJECTS) | $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $^

# Pattern rule for .c to .o in build directory
$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Dependencies (header file dependencies only)
$(BUILD_DIR)/main.o: vector2d.h
$(BUILD_DIR)/vector2d.o: vector2d.h

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean build files
clean:
	rm -rf $(BUILD_DIR)
