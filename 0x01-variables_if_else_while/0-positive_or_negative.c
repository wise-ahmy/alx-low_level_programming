#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - main function to generate random a number
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d
}
