#include "function_pointers.h"
/**
 * main - main
 *
 */

int main(argc, argv[])
{
	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*'
		|| argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2] == '/' || argv[2] == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = (*get_op_func(argv[2])(a, b));

	printf("%d\n", result);
}
