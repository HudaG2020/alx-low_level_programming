#include <stdio.h>
#include "main.h"

/**
* main - prints the name of the program
* @argc: stands for number of arguments
* @argv: stands for array of strings of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}
