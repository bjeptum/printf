#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int _printf(const char *format, ...);
char *_itoa(int i, char *strout, int base);

int _putchar(char c);

#endif /* MAIN_H */

