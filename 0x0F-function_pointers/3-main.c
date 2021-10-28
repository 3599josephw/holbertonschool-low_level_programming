#include "3-calc.h"
/**
 * main - main
 * @argc: argc
 * @argv: commands
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, a, b;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fun = (get_op_func(argv[2]));

	result = fun(a, b);

	printf("%d\n", result);

	return (0);
}
