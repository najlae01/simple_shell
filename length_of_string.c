#include "simple_shell.h"

/**
 * strlen_function - used to determine the length of a string.
 * @str_var: ant string.
 * Return: The lenght of string, or -1.
 */
int strlen_function(char *str_var)
{
size_t lenght_;
if (!str_var)
return (-1);
lenght_ = 0;
while (str_var[lenght_] != '\0')
lenght_++;
return (lenght_);
}
