This project has been created as part of the 42 curriculum by yeliew.

# ft_printf
### Description
ft_printf is a recreation of the standard C `printf()` function. 

The project focuses on handling formatted output and variadic arguments using `stdarg.h`. 

It supports character `%c`, string `%s`, decimal `%d / %i`, unsigned decimal `%u`, hexadecimal `%x / %X`, pointer `%p`, and percent `%%` conversions.

### Instructions
Run `make` to compile all the files.

Then `cc libftprintf.a test.c` to create the `a.out` for execution.

Use `make fclean` to remove every compiled .o files and .a file.

Use `make re` to recompile the files after any code changes.

### Resources
###### References

* `printf(3)` — Linux manual page 
* `stdarg(3)` — Documentation for variadic argument handling 
* `%d %i differences` stackoverflow

###### AI Usage

AI was used as a learning and debugging aid to understand variadic functions, pointers, number conversions, and to identify and troubleshoot code errors. It was also used to suggest testing methods and clarify unexpected behaviour.
