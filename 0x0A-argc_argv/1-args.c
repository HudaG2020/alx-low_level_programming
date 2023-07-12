#include <stdio.h>
#include "main.h"

/**
* main - print the number of arguments passed to the program
* @argc: stands for number of arguments
* @argv: stands for array of strings of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
