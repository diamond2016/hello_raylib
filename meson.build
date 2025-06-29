project('hello_raylib', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

cc = meson.get_compiler('c')

src_hello = 'hello_raylib.c'
src_circle = 'circle.c'
raylib_dir = '/home/riccardo/Programming/c/raylib/src'

# Trova la libreria statica raylib
raylib_lib = cc.find_library('raylib', dirs: raylib_dir, required: true, static: true)

# Trova la libreria matematica 
math_lib = cc.find_library('m', required: false, static: false)

# Se ti servono anche le intestazioni, aggiungi:
raylib_inc = include_directories(raylib_dir)

executable('hello_raylib',
  sources: src_hello,
  include_directories: raylib_inc,
  dependencies: [raylib_lib, math_lib],
  install: true
)

executable('circle',  sources: src_circle,  include_directories: raylib_inc,  dependencies: [raylib_lib, math_lib],  install: true)

src_grid = 'grid.c'

executable('grid',  sources: src_grid,  include_directories: raylib_inc,  dependencies: [raylib_lib, math_lib],  install: true)

