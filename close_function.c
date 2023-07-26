#include "simple_shell.h"

/**
 * close_function - Checks the exit status and performs appropriate actions.
 *
 * @arguments_V: The value of the argument..
 * @args_: The arguments.
 * @strPointer: A pointer to a string..
 * @indexCounter: An integer counter.
 * @er_: Any exit errors.
 * @state: The status of the exit function.
 *
 * Return: nothing (void).
 */
void close_function(char **arguments_V, char **args_,
char *strPointer, int indexCounter, int *er_, int *state)
{
if (!args_[1])
{
noArguments(er_, state, args_, strPointer);
return;
}
if (is_digit(args_[1]) == 1)
{
useNumericArguments(arguments_V[0], args_,
indexCounter, er_);
}
else
{
useInvalidArguments(arguments_V[0], args_, indexCounter, er_);
}
clear_function(args_);
}
