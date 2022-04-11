#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;

	srand time(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("last digit of &d is %d %s\n", n, n % 10,
	((n % 10) == 0 ? "and is 0"
	:  (((n % 10) > 5) ? "and is greater than 5"
	: "and is less than 6 and not 0")));
	
	return (0);
 }
