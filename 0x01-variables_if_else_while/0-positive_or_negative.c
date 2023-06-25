#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
<<<<<<< HEAD

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	printf("%d is zero\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is positive\n", n);
	return (0);
}

=======
*/
int main(void)
{

	int m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	if (m == 0)
	printf("%d is zero\n", m);
	else if (m < 0)
	printf("%d is negative\n", m);
	else
	printf("%d is positive\n", m);
	return (0);
}
>>>>>>> refs/remotes/origin/master
