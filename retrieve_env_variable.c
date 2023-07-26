#include "simple_shell.h"


/**
 * retrieve_env_variable - a function that retrieves
 * the value of a specified environment variable.
 *
 * @param_env: environment parameter.
 *
 * Return: NULL.
 */
char *retrieve_env_variable(char *param_env)
{
size_t length_var;
int indexi;
length_var = strlen_function(param_env);
for (indexi = 0; environ[indexi] != NULL; indexi++)
{
if (compare_strings(environ[indexi], param_env, length_var) == 0
		&& environ[indexi][length_var] == '=')
return (environ[indexi] + length_var + 1);
}
return (NULL);
}

