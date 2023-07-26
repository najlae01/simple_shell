#include "simple_shell.h"
/**
 * clean_and_close - function to clean and exit the prog
 * @state: exit status.
 * @args_: The argument.
 * @strPointer: Pointer to strings.
 * Return: Nothing (void).
 */
void clean_and_close(int state, char **args_,
char *strPointer)
{
clear_function(args_);
free(strPointer);
exit(state);
}

/**
 * clear_function - Frees the memory allocated for a string.
 *
 * @para_arguments: A pointer to the string to be freed.
 *
 * Return: Nothing(void).
 */
void clear_function(char **para_arguments)
{
char **ptr_var = para_arguments;

while (*ptr_var)
{
free(*ptr_var);
ptr_var++;
}
free(para_arguments);
}
