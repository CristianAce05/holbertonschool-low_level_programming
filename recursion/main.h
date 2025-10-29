#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
int _atoi(char *s);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int _strlen(char *s);
int _putchar(char c);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);

#endif /* MAIN_H */
