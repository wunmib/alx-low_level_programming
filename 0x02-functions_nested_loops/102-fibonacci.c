#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space seperated.
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = l, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu\n ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
