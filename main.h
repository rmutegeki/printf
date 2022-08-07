#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list arguments);
int _print_str(va_list arguments);
int _print_i(va_list arguments);
int _print_d(va_list arguments);
int _print_b(va_list arguments);
int (*_select_mod(char c))(va_list);
#endif /* _MAIN_H_ */
