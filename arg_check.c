#include "monty.h"


int arg_check(char *argument)
{
    #define true 0
    #define false 1
    int i;
    int lenght;

    if (*argument == 0 || argument == NULL)
    {
        return (false);
    }

    lenght = strlen(argument);
    i = 0;
    //printf ("lenght is %d\n", lenght);
    if (argument[0] == '-')
    {
        i++;
    }
    for(i; i < lenght && argument[i] <= '9' && argument[i] >= '0'; i++)
    {
        //printf("argument %c entered with number %d\n", argument[i], argument[i]);
        continue;
    }

    if (i == lenght)
    return (true);
    else
    return (false);

}