#include "simple_shell.h"


/**
 * main - main simple shell.
 *
 * @argc: The argument.
 * @argv: array of strings.
 *
 * Return: always 0 success.
 */

int main(int argc, char **argv)
{
int statePath, st, indexj, indexi, true_var, false_var;
char *ptrPath, **args_var, *ptr_vari, *myToken, **env_var;
pid_t pid;
char *commandLine_var = NULL;
size_t size1 = 0;
ssize_t size2, size3 = 0;
false_var = 0;
true_var = 0;
ptr_vari = "RANDOMm";
(void) size3;
(void) argc;
env_var = environ;
indexi = isatty(STDIN_FILENO);
ptrPath = NULL;
indexj = 0;
while (1)
{
indexj++;
if (indexi)
size3 = write(1, "#cisfun$ ", 9);
signal(SIGINT, signal_received);
size2 = getline(&commandLine_var, &size1, stdin);
if (size2 == -1 && indexi)
{
write(1, "\n", 1);
free(commandLine_var);
exit(true_var);
}
if (size2 == -1 && !indexi)
{
free(commandLine_var);
exit(true_var);
}
if (funtion_strcmp(commandLine_var, "\n") == 0 && indexi)
continue;
args_var = splitsStrings(commandLine_var);
if (!args_var)
continue;
if (funtion_strcmp(args_var[0], "exit") == 0)
{
close_function(argv, args_var, commandLine_var, indexj, &false_var, &true_var);
continue;
}
if (funtion_strcmp(args_var[0], "env") == 0)
{
print_env_variables(args_var);
clear_function(args_var);
continue;
}
pid = fork();
if (pid == -1)
{
clear_function(args_var);
size3 = write(STDERR_FILENO, "fork was failed\n", 12);
return (1);
}
else if (pid == 0)
{
statePath = FindRoute(args_var[0]);
if (statePath != 0)
{
ptr_vari = retrieve_env_variable("PATH");
myToken = strtok(ptr_vari, ":");
while (myToken != NULL)
{
ptrPath = concatenate_function(myToken, args_var[0]);

if (access(ptrPath, F_OK) != -1)
break;
myToken = strtok(NULL, ":");
if (myToken != NULL)
free(ptrPath);
}
if (ptrPath == NULL)
ptrPath = args_var[0];
}
else
ptrPath = args_var[0];
if (strlen_function(ptr_vari) != -1)
execve(ptrPath, args_var, env_var);
check_errors_pgm(argv[0], args_var[0], indexj, statePath, &true_var);
if (statePath != 0 && strlen_function(ptr_vari)
		&& strlen_function(ptr_vari) != -1)
free(ptrPath);
clear_function(args_var);
free(commandLine_var);
exit(true_var);
}
else
{
wait(&st);
clear_function(args_var);
true_var = WEXITSTATUS(st);
}
fflush(stdin);
}
free(commandLine_var);
return (0);
}


