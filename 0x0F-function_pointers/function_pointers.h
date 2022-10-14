#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int (*get_op_func(char *s))(int, int);

#endif
