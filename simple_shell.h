#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

/* librairies*/
#include <stddef.h>
#include <fcntl.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#define DELIM " \t\r\n\v\a"



/*--------------------*/
/*program errors*/
void error_exit_fun(char *param_args_v, char **param_args, int param_counter);
void check_errors_pgm(char *param_args, char *param_cmd,
		int param_counter, int param_number, int *param_exit_status);

/*Convert functions */
int convert_string_to_int(char *param_string);
char *convertInt_function(int num_int);
int digitCount(int num_int);
int extract_digits_number(int num_int, char *param_string);
int is_digit(char *param_string);
/*handle arguments*/
void noArguments(int *er_, int *state,
char **args_, char *strPointer);
void useNumericArguments(char *prg_name,
char **args_, int indexCounter, int *er_);
void useInvalidArguments(char *prg_name,
char **args_, int indexCounter, int *er_);
/*close and clean function*/
void clean_and_close(int state, char **args_,
char *strPointer);
void clear_function(char **para_arguments);
void close_function(char **arguments_V, char **args_,
char *strPointer, int indexCounter, int *er_, int *state);
/*search for the path*/
int FindRoute(char *str_var);
/*split string */
char **splitsStrings(char *str_var);
/*concatenate */
char *concatenate_function(char *strings, char *route);
/*duplicate string*/
char *duplicateString(const char *str_var);
/*reverse order of characters*/
void reverses_order_char(char *str_var, int str_length);
/*signal request ... */
void signal_received(int param_signalR);
/* environment variables*/
void print_env_variables(char **param_args);
extern char **environ;
char *retrieve_env_variable(char *param_env);
/**/
int strlen_function(char *str_var);
void close_function(char **arguments_V, char **args_,
char *strPointer, int indexCounter, int *er_, int *state);
int funtion_strcmp(char *string_1, char *string_2);
int compare_strings(char *string_1, char *string_2, size_t num_bytes);
#endif


