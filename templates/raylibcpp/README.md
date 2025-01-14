# {{ project_name }} 

This a template to get you up and running with raylib dev.

## Getting Started

With theese instructions can you compile a raylib C/C++ project for both desktop
and web with web assembly.

### Prerequisites

The things you need before installing the software.

* Cmake 
* Make 
* [Emscripten](https://emscripten.org/docs/getting_started/downloads.html) and
  ready to setup env.
* Raylib installed on the system eg `paru -S raylib`
* Raylib cloned and compiled for the web [source](https://github.com/raysan5/raylib/wiki/Working-for-Web-(HTML5)#2-compile-raylib-library)

### Installation
```
git clone 
cd 
```

## Usage

Change PATHS in `Makefile`

`RAYLIB_WASM_SRC = path/to/raylib/src/raylib.web.a` aka the dir of static
library for web version of raylib.


### Compile and run
```
make run
```

### Compile for the web 
Before you do be sure to activate the emcc env.
I Have setup:
```bash
alias get_emsdk='source path/to/emsdk/emsdk_env.sh'

```
And then when raylib, makefile and emcc is ready compile it.

```
make asm 
```

### View web Version 
```
cd wasm_build
python3 -m http.server
```

Open the browser at [http://localhost:8000](http://localhost:8000)

## License
This project is under MIT license
