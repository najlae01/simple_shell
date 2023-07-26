#include "simple_shell.h"

/**
 * convertInt_function - This function converts an interger to a string.
 * @num_int: An integer to convert.
 * Return: A pointer to string.
 */
char *convertInt_function(int num_int)
{
char *string_var;
int num_neg, _length, index1;
if (num_int == 0)
{
string_var = (char *) malloc(2 * sizeof(char));
string_var[0] = '0';
string_var[1] = '\0';
return (string_var);
}
num_neg = 0;
_length = digitCount(num_int);
if (num_int < 0)
{
num_neg = 1;
num_int = -num_int;
_length++;
}
string_var = (char *) malloc((_length + 1) * sizeof(char));
index1 = extract_digits_number(num_int, string_var);
if (num_neg)
string_var[index1++] = '-';
string_var[index1] = '\0';
reverses_order_char(string_var, index1);
return (string_var);
}
/**
 * digitCount - this function name suggests that it counts the number
 * of digits in a given integer.
 * @num_int: integer
 * Return: number of digits
 */
int digitCount(int num_int)
{
int c = 0;
while (num_int > 0)
{
num_int = num_int / 10;
c++;
}
return (c);
}

/**
 * extract_digits_number - This function extracts the digits of a given integer
 * and stores them in a string
 * @num_int: An integer to etract.
 * @param_string: The string in which to store the digits.
 * Return: The index of the last digit in the string.
 */
int extract_digits_number(int num_int, char *param_string)
{
int index1 = 0;
while (num_int > 0)
{
int digit = num_int % 10;
param_string[index1++] = digit + '0';
num_int = num_int / 10;
}
return (index1);
}

/**
 * is_digit - The function checks whether a given character
 * is a digit.
 * @param_string: string to check.
 * Return: 1 is a digit or 0 is not a digit.
 */
int is_digit(char *param_string)
{
while (*param_string != '\0')
{
if (*param_string < '0' || *param_string > '9')
return (0);
param_string++;
}
return (1);
}

/**
 * convert_string_to_int - converts a string to an integer
 * @param_string: A string to convert.
 * Return: An integer.
 */
int convert_string_to_int(char *param_string)
{
int index1, string_;
int number_, x;
unsigned int num;
string_ = 1;
num = 0;
for (index1 = 0; *(param_string + index1) != '\0'; index1++)
{
if (*(param_string + index1) == '-')
string_ *= -1;
else if (*(param_string + index1) >= '0' && *(param_string + index1) <= '9')
{
x = 1;
number_ = index1 + 1;
while (*(param_string + number_) >= '0' && *(param_string + number_) <= '9')
{
x *= 10;
number_++;
}
num += (*(param_string + index1) -'0') * x;
if (!(*(param_string + index1 + 1) >= '0'
			&& *(param_string + index1 + 1) <= '9'))
break;
}
else
continue;
}
return (num *string_);
}
