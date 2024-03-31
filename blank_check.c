#include "monty.h"
/**
 * blank_check - h
 * @buffer: 2
 * Return: 1
*/
int blank_check(char *buffer)
{
#define true 1
#define false 0
int i;
int lenght;

if (buffer == NULL)
return (-1);
if (*buffer == 10)
{
return (true);
}
lenght = strlen(buffer);
	for (i = 0; i < lenght - 1 && buffer[i] == 32; i++)
{
	continue;
}
if (i == (lenght - 1))
return (true);
else
return (false);

}
