# bf-interpreter-in-c

A simple brainfxxk interpreter, implemented in pure C.

## Compile

```bash
gcc ./src/bf.c -Wall -o ./bf.out
```

## Run

```bash
cat hello-world.bf | ./bf.out
```

## Examples / Test cases

### 99 Bottles of Beer

from <http://www.99-bottles-of-beer.net/language-brainfuck-101.html>

```bash
cat 99-bottles-of-beer.bf | ./bf.out
```

### Sierpinski triangle

```bash
cat sierpinski-triangles.bf | ./bf.out
```

### Print square numbers from 1 to 10000

```bash
cat squares.bf | ./bf.out
```

### Mandelbrot (what's this?)

```bash
cat mandelbrot.bf | ./bf.out
```
