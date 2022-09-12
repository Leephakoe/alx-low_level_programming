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
					prinf("last %n is greater than 5");
}
				else if (n==0)
{
				printf("Last %n is equal 0");
}
				else if (n<6)
{
				 printf("Last %n is less than 6");
}
					return (0);

}
