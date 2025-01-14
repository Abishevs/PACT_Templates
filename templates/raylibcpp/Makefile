# Directories
BUILD_DIR = build
TARGET = App
SOURCE_DIR = src
WASM_DIR = wasm_build
WASM_TARGET = app.html

# Commands
CMAKE = cmake
CMAKE_BUILD = cmake --build
EMCC = emcc

# Flags for Emscripten (WebAssembly)
EMCC_FLAGS = -I$(HOME)/dev/toolchains/raylib-wasm/src \
             -L$(HOME)/dev/toolchains/raylib-wasm/src \
             -lraylib.web \
             -s USE_GLFW=3 -s FULL_ES2=1 -s ALLOW_MEMORY_GROWTH=1 \
             -s ASYNCIFY

.PHONY: all clean run asm clean-wasm

# Default target: Build the native project
all: $(BUILD_DIR)
	cd $(BUILD_DIR) && $(CMAKE) .. && $(CMAKE_BUILD) .

# Create the build directory for native builds
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean the native build directory
clean:
	rm -rf $(BUILD_DIR)

# Run the native application
run: all
	$(BUILD_DIR)/$(TARGET)

# Build the WebAssembly version
asm: $(WASM_DIR)
	$(EMCC) $(SOURCE_DIR)/main.cpp -o $(WASM_DIR)/$(WASM_TARGET) $(EMCC_FLAGS)

# Create the WebAssembly build directory
$(WASM_DIR):
	mkdir -p $(WASM_DIR)

# Clean the WebAssembly build directory
clean-wasm:
	rm -rf $(WASM_DIR)

