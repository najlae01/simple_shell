#include "simple_shell.h"


/**
 * check_errors_pgm - this function checks for errors.
 *
 * @param_args: The arguments passed to the function..
 * @param_cmd: The command line being executed.
 * @param_counter: An integer counter.
 * @param_number: A flag to indicate whether to check for the path.
 * @param_exit_status: The status of the "exit" function.
 *
 * Return: void.
 */

void check_errors_pgm(char *param_args, char *param_cmd,
		int param_counter, int param_number, int *param_exit_status)
{
int num;
char *pointer_var, *token_var;

pointer_var = convertInt_function(param_counter);
(void)num;
if (param_number == 1)
{
token_var = strtok(param_cmd, "/");
while (token_var)
{
param_cmd = token_var;
token_var = strtok(NULL, "/");
}
}
num = write(STDERR_FILENO, param_args, strlen_function(param_args));
num = write(STDERR_FILENO, ": ", 2);
num = write(STDERR_FILENO, pointer_var, strlen_function(pointer_var));
num = write(STDERR_FILENO, ": ", 2);
num = write(STDERR_FILENO, param_cmd, strlen_function(param_cmd));
num = write(STDERR_FILENO, ": ", 2);
if (funtion_strcmp(strerror(errno), "Permission refused") == 0)
{
perror("");
*param_exit_status = 126;
}
else
{
num = write(STDERR_FILENO, "not found\n", 10);
*param_exit_status = 127;
}
free(pointer_var);
}

/**
 * error_exit_fun - This function checks for errors related
 * to the "exit" command.
 *
 * @param_args_v: The arguments passed to the function.
 * @param_args: The parameters passed to the command line.
 * @param_counter: An integer counter.
 *
 * Return: void.
 */
void error_exit_fun(char *param_args_v, char **param_args, int param_counter)
{
int number;
char *pointer_var;

pointer_var = convertInt_function(param_counter);
(void)number;
number = write(STDERR_FILENO, param_args_v, strlen_function(param_args_v));
number = write(STDERR_FILENO, ": ", 2);
number = write(STDERR_FILENO, pointer_var, strlen_function(pointer_var));
number = write(STDERR_FILENO, ": ", 2);
number = write(STDERR_FILENO, param_args[0], strlen_function(param_args[0]));
number = write(STDERR_FILENO, ": Illegal number: ", 18);
number = write(STDERR_FILENO, param_args[1], strlen_function(param_args[1]));
number = write(STDERR_FILENO, "\n", 2);
free(pointer_var);
}
