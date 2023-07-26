#include "simple_shell.h"

/**
 * FindRoute - checks the path.
 *
 * @str_var: Any string.
 *
 * Return: 0 = success, or 1 = failed.
 */
int FindRoute(char *str_var)
{
int index1;

for (index1 = 0; str_var[index1] != '\0'; index1++)
{
if (str_var[index1] == '/')
{
return (0);
}
}

return (1);
}
