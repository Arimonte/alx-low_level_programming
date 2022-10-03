#include <stdio.h>

/**
* main - Entry Point
* @argc: Number of arguments passed
* @argv: B]Vector of arguments string
*
* Return: Always 0 (Success)
*/
int main(int argc _attribute_((unused)), char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
