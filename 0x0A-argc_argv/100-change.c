#include <stdio.h>
#include <stdlib.h>

/**
 *minCoins: minimum coins needed
 * to make change
 * @cents: value of coins
 * denominations: types of coins available
 * numCoins: number of coins
 * Return: returns 0
*/

int minCoins(int cents)
{
	if (cents < 0)
	return (0);

	int denominations[] = {25, 10, 5, 2, 1};
	int numCoins = 0;

	for (int i = 0; i < sizeof(denominations) / sizeof(denominations[0]); i++)
{
	numCoins += cents / denominations[i];
	cents %= denominations[i];
}

	return (numCoins);
}

/**
 *main: checks number of arguments
 *@argc: number of arguments
 *@argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
{
	printf("Error\n");
	return (1);
}

	int cents = atoi(argv[1]);
	int result = minCoins(cents);

	printf("%d\n", result);

	return (0);
}
