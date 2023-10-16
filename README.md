# Printf

The goal of this project is to implement the same function. You will primarily learn how to use Variadic Functions.

# I - Project Introduction
Projects should be written following the Norm's rules. If there are bonus files/functions, these files/functions will be included in the norm check and will receive a score of 0 if there is a norm error. Functions should not crash unexpectedly due to undefined behavior. Any memory allocated on the heap must be properly freed when necessary. Memory leaks will not be tolerated. If this task is required, a Makefile should be submitted. It will be compiled with the -Wall -Wextra -Werror flags specified. The Makefile should not give any re-link errors.

Makefiles should contain at least $(NAME), all, clean, fclean, and .re. If your project allows libft, you should copy the sources and their associated Makefiles along with their associated Makefiles to the libft folder. Your project's Makefile should use the Makefile to compile the library and then compile your project.

# II -  Mandatory

Program name: libftprintf.a.
Files: .c, .h, Makefile.
Makefile: all, clean, fclean, re, bonus.
Allowed external functions: malloc, free, write, va_start, va_arg, va_copy, va_end.
Allowed Libft: Yes
Description: Write a library that contains ft_printf, a function that will mimic the real printf.

| Prototype |
|-----------|
| int ft_printf(const char *, …) |

You are required to recode the printf function from the libc. 
It should not perform any buffer management as the original printf function did. 
We will handle the following conversions: c, s, p, d, i, u, x, X, and %. 
All conversions with -0.* should handle the combination of the '' flag and the minimum field width. 
It will be compared to the original printf function.
