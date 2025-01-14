# Directories
BUILD_DIR = build
TARGET = App

# Commands
CMAKE = cmake
CMAKE_BUILD = cmake --build

.PHONY: all clean run

# Default target: Build the project
all: $(BUILD_DIR)
	cd $(BUILD_DIR) && $(CMAKE) .. && $(CMAKE_BUILD) .

# Create the build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean the build directory
clean:
	rm -rf $(BUILD_DIR)

# Run the application
run: all
	$(BUILD_DIR)/$(TARGET)
