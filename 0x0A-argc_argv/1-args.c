#include <stdio.h>

/**
* main - Entry Point
* @argc: Number of arguments passed
* @argv: Vector of arguments string
*
* Return: Always (0) Success
*/

int main(int argc, char **argv _attribute_((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
