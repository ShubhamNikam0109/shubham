/*Program to check given number is perfect number or not.

Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number.
For example 6 is perfect number since divisor of 6 are 1, 2 and 3.
Sum of its divisor is 1 + 2+ 3 =6
*/

#include<stdio.h>
int main()
{

	int n,i=1,sum=0;

	printf("Enter a number: ");
	scanf("%d",&n);

	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}

	if(sum == n)
	{
		printf("%d is a perfect number\n",i);
	}
	else
	{
		printf("%d is not a perfect number\n",i);
	}

	return 0;
}