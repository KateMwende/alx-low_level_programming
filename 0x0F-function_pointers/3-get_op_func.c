#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*get_op_func - 
*@s: is the operator passed as argument to the program
*Return: Integer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
    int i;
}
