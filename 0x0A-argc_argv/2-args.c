#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
* @argc: stands for number of arguments
* @argv: stands for array of strings of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
