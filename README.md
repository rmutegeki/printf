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

## Function Description :speech_balloon:

The function `_printf` writes output to standard output. The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of variadic functions under the `stdarg.h` header file) are converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon successful return, `printf` returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns `-1`.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (not `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fectching zero or more subsequent arguments. Conversion specification is introduced by the character `%` and ends with a conversion speicifier. In between the `%` character and conversion specifier, there may be (in order) zero or more *flags*, an optional minimum *field width*, an optional *precision* and an optional *length* modifier. The arguments must correspond with the conversioin specifier, and are used in the order given.

## File Description :speech_balloon:

The repository contains the following files:

| **Function** | **Description** |
| ------------- | ----------------- |
| main.h | contains all function prototypes used for `_printf` |



























