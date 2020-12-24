# bf-interpreter-in-c

[![CodeFactor](https://www.codefactor.io/repository/github/xiongnemo/bf-interpreter-in-c/badge)](https://www.codefactor.io/repository/github/xiongnemo/bf-interpreter-in-c)

A simple brainfxxk interpreter, implemented in pure C.

## Compile

```bash
gcc ./src/bf.c -Wall -o ./bf.out
```

## Run

```bash
./bf.out hello-world.bf
```

## Examples / Test cases

### 99 Bottles of Beer

from <http://www.99-bottles-of-beer.net/language-brainfuck-101.html>

```bash
./bf.out 99-bottles-of-beer.bf
```

### Sierpinski triangle

```bash
./bf.out sierpinski-triangles.bf
```

### Print square numbers from 1 to 10000

```bash
./bf.out squares.bf
```

### Mandelbrot (what's this?)

```bash
./bf.out mandelbrot.bf
```

### Christmas Tree (Happy X'mas!)

from <https://codegolf.stackexchange.com/questions/15860/make-a-scalable-christmas-tree>

> I made this for a challenge on /r/dailyprogrammer, (not sure if reusing code is against the spirit/rules of this) but:
>
> Brainfuck. Takes as input a number (length of bottom row of leaves) and two characters. One space between each.
>
> Example input: 13 = +
>
> Example output:
```
      +
     +++
    +++++
   +++++++
  +++++++++
 +++++++++++
+++++++++++++
     ===
```

```bash
./bf.out ./christmas_tree.bf
```

Input:
```
1
3
 
=
 
+

```

### The Brainfuck to C interpretor

from <https://gist.github.com/roachhd/dce54bec8ba55fb17d3a>

```
[/* bf2c.b
* The Brainfuck to C interpretor
* Katie ball
*
* NOTE: This was rushed and currently
* it does not take well to any characters of input besides
* the 8 standard brainfuck operators and newline and EOF.
* So consequently, it will only interpret un-commented code.
* Check my web site for a later release
* that will probably have support for commented code.
*/]
```

```bash
./bf.out ./bf2c.bf > bf2c.bfout.c
```

Input:

Your bf code, with an EOF in the end.

The sample output (using the bf source as input) is here for you to check.