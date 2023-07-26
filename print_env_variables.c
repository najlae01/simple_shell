#include "simple_shell.h"


/**
 * print_env_variables - prints environment variables.
 *
 * @param_args: pointer to pointer.
 *
 * Return: void.
 */
void print_env_variables(char **param_args)
{
char **environment_variable, *str_variable;
ssize_t st_var;
(void)st_var;
if (param_args[1] != NULL)
{
str_variable = "environmment: ‘";
st_var = write(STDERR_FILENO, str_variable, strlen_function(str_variable));
st_var = write(STDERR_FILENO, param_args[1], strlen_function(param_args[1]));
str_variable = "’: The specified file or directory does not exist.\n";
st_var = write(STDERR_FILENO, str_variable, strlen_function(str_variable));
}
else
{
environment_variable = environ;

while (*environment_variable)
{
st_var = write(1, *environment_variable,
		strlen_function(*environment_variable));
st_var = write(1, "\n", 2);

environment_variable++;
}
}
}


