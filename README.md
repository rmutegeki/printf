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
| test folder | contains `main.c` source files used for testing compiled code under different conditions |
| \_printf.c | contains the function `_printf`, which uses the prototype `int _printf(const char *format, ...)`. The format string is composed of zero or more directives |
| helper\_functions.c | Core helper functions for \_printf, including funcions `rev_string`, `skip_spaces` & `_strlen` for string manipulation and printing to stdout |
| specifier\_csSr.c | contains functions `print_c` for `%c`, `print_s` for `%s`, `hex_print` for `%X` `print\_S` for `%S` `print\_r` for `%r` |
| specifier\_id.c | contains functions `print_i` for `%i` and `print_d` for `%d` |
| specifier\_rot13.c | contains the function `print_R`, which handles the conversion specifier `R`|
| specifier\_uob.c | contains functions `print_u` for `%u`,  `print_o` for `%o` and `print_b` for `%b`|
| specifier\_xXp.c | contains functions `print_hex` for `%X`,  `print_x` for `%x` and `print_p` for `%p`|
| \_putchar.c | contains the function `_putchar`, which writes a characters to standard output |

## Usage :running:

To use this `_printf` function, clone this repository using this command below;
```
$ git clone https://github.com/rmutegeki/printf.git
```
Compile all `.c` files in the repository and include the header file `main.h` with any main function.

Example `main.c`:
```
#include "main.h"
{
	_printf("Jebaaleko - Hello!\n");

	return (0);
}
```

Compilation:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o Test-file
```

Output:
```
$ ./Test-file
Jebaaleko - Hello!
$
```

## Authors :black_nib:

* [Raymond Lukwago](https://github.com/lukwagoraymond) | [@RaymondLukwago](https://twitter.com/RaymondLukwago)
* [Ronald Mutegeki](https://github.com/rmutegeki) | [@ronaldmutegeki_](https://twitter.com/ronaldmutegeki_)

## Acknowledgements :pray:

The `_printf` function emulates functionality of the C standard library function `printf`. This README borrows from the Linux man page [printf(3)](https://linux.die.net/man/3/printf).

This program was written as part of the curriculum for ALX Africa School. ALX Africa School is a project-based peer learning programme designed to provide students with the in-deman skills for computer science careers. For more information, visit [this link](https://www.alxafrica.com/).




































