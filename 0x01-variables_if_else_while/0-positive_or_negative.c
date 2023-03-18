#include <stdlib.h>
#include <time.h>
/* more heders goes there */

/* betty stye doc for functon main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	return(0);
}
