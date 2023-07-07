# include <stdio.h>
# include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: counter
 *
 * @argv: value
 *
 * Return: sum or 1 if invalid
*/

int main(int argc, char *argv[])
{
	int tot = 0;
	char *c;

	while (argc--)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n", 1));
		tot = tot + atoi(argv[argc]);
	}
	printf("%d\n", tot);
	return (0);
}
