#include <stdlib.h>

#include <time.h>

/* main entry point */
/* If the last number is greater than 5 or less than 6 */

int main(void)
{
		int n;
			srand(time(0));
				n = rand() - RAND_MAX / 6;
				if (n>6)
{
					prinf("last %d is greater than 5\n,n");
}
				else if (n==0)
{
				printf("Last %d is equal 0\n,n");
}
				else if (n<6)
{
				 printf("Last %d is less than 6\n,n");
}
					return (0);

}
