#include "simple_shell.h"

/**
 * funtion_strcmp - This function compares two strings.
 * @string_1: The first string to compare.
 * @string_2: The second string to compare.
 * Return: 0 if strings are the same or the diffrence.
 */
int funtion_strcmp(char *string_1, char *string_2)
{
int index1, index2, index3;
index1 = 0;
index3 = 0;
while (string_1[index1] != '\0')
index1++;
for (index2 = 0; index2 <= index1; index2++)
{
if (string_1[index2] != string_2[index2])
{
index3 = string_1[index2] - string_2[index2];
break;
}
}
return (index3);
}

/**
 * compare_strings - This function compares two strings.
 * @string_1: The first string to compare.
 * @string_2: The second string to compare.
 * @num_bytes: number of bytes to cmpare.
 * Return: 0 if are the same or returns the diffrence.
 */
int compare_strings(char *string_1, char *string_2, size_t num_bytes)
{
size_t index1;
for (index1 = 0; index1 < num_bytes; index1++)
{
if (string_1[index1] != string_2[index1])
return (string_1[index1] - string_2[index1]);
if (string_1[index1] == '\0')
return (0);
}
return (0);
}
