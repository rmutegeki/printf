# _printf :page_facing_up:

`_print` is a custom recreation of the C standard library function `printf`. The project was completed to represent an application of knowledge that **ALX School** cohort of two students have learned since the starting of the program on June 8, 2022.

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 20.04 LTS machine and compiled using `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Requirements for this Project :couple:

* Code must comply with the `Betty` style and document checks.
* Compile code using flags `-Wall`, `-Werror`, `-Wextra`,`-pedantic`, `-Wno-format`
* Cannot use global variables.
* Restricted to no more that **5** functions per file.
* Function prototypes should be included in header file `main.h`
* Header files should be include guarded.
* Authorised functions and macros:.. `write`(`man 2 write`).. `malloc`(`man 3 malloc`)..`free`(`man 3 free`)..`va_start`(`man 3 va_start`)..`va_end`(`man 3 va_end`)..`va_copy`(`man 3 va_copy`)..`va_arg`(`man 3 va_arg`)

## Mandatory Tasks

- [x] Write function that produces output with conversion specifiers `c`, `s`, and `%`.
- [x] Handle conversion specifiers `d`,`i`.

## Advanced Tasks

- [x] Handle conversion specifier `b`.
- [x] Handle conversion specifier `u`,`o`,`x`,`X`.
- [ ] Use a local buffer of *1024* chars in order to call write as little as possible.
- [x] Handle conversion specifier `s`.
- [x] Handle conversion specifier `p`.
- [ ] Handle flag characters `+`, **space**, and `#` for non-custom conversion specifiers.
- [ ] Handle length modifiers `i` and `h` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the `0` flage character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier `r` that prints the reversed string.
- [x] Handle the custom conversion specifier `R` that prints the **rot13'ed** string.
- [ ] All above options should work well together.

