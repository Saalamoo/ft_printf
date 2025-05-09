# ft_printf

## About 

#### This project is about implementing the printf built-in command.
The following converions are handled in this project:
 - `%s` string
 - `%u` unsigned decimal
 - `%i` integer
 - `%d` decimal
 - `%p` pointer
 - `%x` lower case hexadecimal
 - `%X` upper case hexadecimal
 - `%c` character
 - `%%` percentage



#### Makefile creates a `Files` directory which hold the project content


 #### The content include:

1) `inc` : ft_printf.h
2) `src` : ft_printf.c ft_print_hex.c ft_put.c
3) `obj` : ft_printf.o ft_print_hex.o ft_put.o

`NOTE`: The best way to test your code is by simply comparing your function output with `printf()` outputs.


In this project the main challenge I faced was learning how to work with the `variadic functions`. Since the built-in command `printf` take infinte number of arguments it was a challenge to figure how to implement the same function in my code, and the variadic functions were the answer. Implementing `va_start()`, `va_arg()` and `va_end()` gave my function the ability to accept `infinite` number of arguments.

## Compilation

To compile the project, simply run:

```bash
make
```
This will compile all source files and generate the libftprintf.a archive. Then compile and run the test:

```bash
gcc libftprintf.a -o ft_printf
./ft_printf
```




