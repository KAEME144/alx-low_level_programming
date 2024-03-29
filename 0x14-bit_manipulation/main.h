#ifndef __MAIN_H__
#define __MAIN_H__

unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int _putchar (char c);
int get_bit(unsigned long int n, unsigned int index);
int set _bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianess(void);

#endif
