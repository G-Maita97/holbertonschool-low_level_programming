#include <stdio.h>
/**
 * main - start de program for return with the solucion
 * @argc: Variable type int.
 * @argv: Variable type char.
 * Description: print number the elements the argc.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *nombre;
	(void) argc;
	nombre = argv[0];
	printf("%s\n", nombre);
	return (0);
}


