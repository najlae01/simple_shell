#include "simple_shell.h"

/**
 * noArguments - Handles the scenario when no arguments
 * are provided.
 * @er_: Any exit errors.
 * @state: The status of the exit function.
 * @args_: The arguments.
 * @strPointer: A pointer to a string..
 * Return: Nothing (void).
 */
void noArguments(int *er_, int *state,
char **args_, char *strPointer)
{
if (*er_ == 2 || *state == 2)
{
clean_and_close(2, args_, strPointer);
}
if (*state == 127)
{
clean_and_close(127, args_, strPointer);
}
else
{
clean_and_close(0, args_, strPointer);
}
}

/**
 * useNumericArguments - handles the scenario when
 * the argument is a numeric value.
 *
 * @prg_name: name of the program.
 * @args_: The arguments.
 * @indexCounter: counter integer.
 * @er_: exit errors.
 *
 * Return: Nothing (void).
 */
void useNumericArguments(char *prg_name,
char **args_, int indexCounter, int *er_)
{
unsigned int k_var = (unsigned int) convert_string_to_int(args_[1]);
if (k_var > (unsigned int) INT_MAX)
{
error_exit_fun(prg_name, args_, indexCounter);
*er_ = 2;
}
else
{
k_var %= 256;
clear_function(args_);
exit(k_var);
}
}

/**
 * useInvalidArguments - handles the argument is invalid.
 *
 * @prg_name: name of the program.
 * @args_: The arguments.
 * @indexCounter: counter integer.
 * @er_: Any exit errors.
 *
 * Return: Nothing (void).
 */
void useInvalidArguments(char *prg_name,
char **args_, int indexCounter, int *er_)
{
error_exit_fun(prg_name, args_, indexCounter);
*er_ = 2;
}
