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
	int i = 1;
	int tot = 0;


	while (argc--)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			tot = tot + atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", tot);
	return (0);
}
