# hello_raylib

Questo repository contiene alcuni semplici esempi di utilizzo della libreria raylib per la creazione di grafica in C.

## File C

* **hello_raylib.c**: Un semplice "Hello, World!" che apre una finestra e visualizza un testo.
* **circle.c**: Mostra come disegnare cerchi con diversi stili e colori.
* **grid.c**: Disegna una griglia di rombi verdi.

## Build

Il progetto utilizza Meson per la compilazione. Per compilare ed eseguire uno degli esempi:

```bash
meson build
meson compile -C build
./build/nome_eseguibile 
```
Sostituire `nome_eseguibile` con `hello_raylib`, `circle`, or `grid`.