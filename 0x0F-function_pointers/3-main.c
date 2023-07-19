#include "3-calc.h"

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: output
*/

int main(int argc, char **argv)
{
	int (*op_f)(int, int), a, b;

	if (argc != 4)
		printf("error\n"), exit(98);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_f = get_op_func(argv[2]);
	if (!op_f)
		printf("error\n"), exit(99);
	/*if (!b && ((*argv[2] == '/' || *argv[2] == '%') && b == 0))*/
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("error\n"), exit(100);
	printf("%d\n", op_f(a, b));
	return (0);
}
