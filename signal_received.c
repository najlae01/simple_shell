#include "simple_shell.h"



/**
* signal_received - A function called when a signal is received.
*
* @param_signalR: counter variable.
*
* Return: Nothing(void).
*/
void signal_received(int param_signalR)
{
(void) param_signalR;
write(STDOUT_FILENO, "\n#cisfun$ ", 10);
}


