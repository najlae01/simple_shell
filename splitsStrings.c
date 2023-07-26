#include "simple_shell.h"


/**
 * splitsStrings - splits strings in command.
 *
 * @str_var: the command line.
 *
 * Return: array of strings.
 */
char **splitsStrings(char *str_var)
{
int index1, index2, counter_num;
char *token_var1, *token_var2, **args_var;
(void)index2;
counter_num = 0;
if (str_var[0] != ' ' && str_var[0] != '\t' && str_var[0] != '\n')
counter_num++;
for (index1 = 0; str_var[index1] != '\0'; index1++)
{
if ((str_var[index1] == ' ' || str_var[index1] == '\t') &&
		str_var[index1 + 1] != ' ' && str_var[index1 + 1] != '\t' &&
		str_var[index1 + 1] != '\n')
counter_num++;
}
if (counter_num == 0)
return (NULL);
args_var = malloc((counter_num + 1) * sizeof(char *));
if (args_var == NULL)
{
index2 = write(STDERR_FILENO, "Error: Unable to allocate memory\n", 22);
free(str_var);
exit(98);
}
token_var2 = strtok(str_var, "#");
token_var1 = strtok(token_var2, DELIM);
index1 = 0;
while (token_var1)
{
args_var[index1] = duplicateString(token_var1);
if (args_var[index1] == NULL)
{
index2 = write(STDERR_FILENO, "Error: Unable to allocate memory\n", 22);
clear_function(args_var);
exit(98);
}
token_var1 = strtok(NULL, DELIM);
index1++;
}
args_var[counter_num] = NULL;
return (args_var);
}


