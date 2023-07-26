#include "simple_shell.h"

/**
 * concatenate_function - function concatenate two strings.
 *
 * @strings: the string by command.
 * @route: pointer to the path.
 * Return: a pointer to destination
 */
char *concatenate_function(char *strings, char *route)
{
int var;
unsigned int index1, index2, size1, routeLength, size2;
char *pointer_variable;
(void) var;
size1 = strlen_function(strings);
routeLength = strlen_function(route);
size2 = size1 + routeLength + 2;
pointer_variable = malloc(sizeof(char) * size2);
if (!pointer_variable)
{
var = write(STDERR_FILENO, "Error: Unable to allocate memory\n", 22);
exit(98);
}
for (index1 = 0; index1 < size1; index1++)
pointer_variable[index1] = strings[index1];
pointer_variable[index1] = '/';
for (index1++, index2 = 0; index2 < routeLength; index2++)
pointer_variable[index1 + index2] = route[index2];
pointer_variable[index1 + index2] = '\0';
return (pointer_variable);
}
