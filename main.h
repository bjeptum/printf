#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>



int _printf(const char *format, ...);
char *_itoa(int i, char *buff, int base);
void print_c_s_prct(va_list argList, int *count, const char *format);
void print_d_i(va_list argList, int *count, const char *format);
void print_b(int *count);


int _putchar(char c);
char *_strrev(char *str);

#endif /* MAIN_H */

