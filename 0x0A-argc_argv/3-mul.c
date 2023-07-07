# include <stdio.h>
# include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: counter
 *
 * @argv: value
 *
 * Return: 1 if error, else multiple of two int
*/

int main(int argc, char *argv[])
{
	int tot;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[1]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
