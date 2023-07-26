#include "simple_shell.h"

/**
 * reverses_order_char - reverse a order of characters
 * of a given string.
 * @str_var: any string.
 * @str_length: length of a given string.
 * Return: Nothing (void).
 */

void reverses_order_char(char *str_var, int str_length)
{
char char_var;
int index1;
int index2 = 0;
index1 = str_length - 1;
while (index2 < index1)
{
char_var = str_var[index2];
str_var[index2] = str_var[index1];
str_var[index1] = char_var;
index2++;
index1--;
}
}


