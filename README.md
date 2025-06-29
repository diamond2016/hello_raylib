# hello_raylib

This repository contains simple examples of usage of the raylib library, creation of graphics in C.

## File C

* **hello_raylib.c**: "Hello, World!".
* **circle.c**: circles with colors.
* **grid.c**: diamonds in a grid.

## Build

Use of Meson to compile. The directories. eg of raylib, compiled from source, MUST modified with the user path!:

```bash
meson build
meson compile -C build
./build/nome_eseguibile 
```
change `nome_eseguibile` con `hello_raylib`, `circle`, or `grid`.
