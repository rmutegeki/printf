#ifndef _MAIN_H_
#define _MAIN_H_

/*Standard C headers*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/*macros*/
/*structs*/
/**
 * struct directive_struct - printf directives and helper print functions
 * @ch: the directive
 * @func: pointer to the helper function
 */
typedef struct directive_struct
{
	char ch;
	int (*func)(char *buffer, va_list arg_list);
} directive_t;


int _putchar(char c);
/*Our custom printf*/
int _printf(const char *format, ...);

/*Helper function prototypes*/
void *_calloc(unsigned int nmemb, unsigned int size);
void rev_string(char *s);
int skip_spaces(const char *format);
int _strlen(char *s);
int _putchar(char c);
int add_to_buffer(char *buffer, char c);
int (*get_directive(char c))(char *buffer, va_list arg_list);
void print_buffer(char *);
/*end helper function prototypes*/

/*functions that write to buffer*/
int p_char(char *buffer, va_list arg_list);
int p_string(char *buffer, va_list arg_list);
int p_percent(char *buffer, va_list arg_list);
int p_int(char *buffer, va_list arg_list);
int p_uint(char *buffer, va_list arg_list);
int p_oct(char *buffer, va_list arg_list);
int p_lowhex(char *buffer, va_list arg_list);
int p_uphex(char *buffer, va_list arg_list);
int p_binary(char *buffer, va_list arg_list);
/*end functions that write to te buffer*/

#endif /* _MAIN_H_ */
