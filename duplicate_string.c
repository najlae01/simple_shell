#include "simple_shell.h"

/**
 * duplicateString - function duplicates string.
 * @str_var: any string.
 * Return: string or NULL.
 */
char *duplicateString(const char *str_var)
{
size_t index1;
size_t leng = strlen(str_var) + 1;
char *str_dupl = malloc(leng);
if (str_dupl == NULL)
{
return (NULL);
}
for (index1 = 0; index1 < leng; index1++)
{
str_dupl[index1] = str_var[index1];
}
return (str_dupl);
}
