/*
Program to check whether a number is strong or not.

A number is called strong number if sum of the factorial of its digit is equal to number itself. For example: 145 since
1! + 4! + 5! = 1 + 24 + 120 = 145
*/

#include<stdio.h>
int main()
{

	int num,i,f,r,sum=0,temp;

	printf("Enter a number: ");
	scanf("%d",&num);

	temp=num;

	while(num != 0)
	{
		i = 1, f = 1;
		r = num % 10;

		while(i <= r)
		{
			f = f * i;
			i++;
		}

		sum = sum + f;
		num = num / 10;

	}

	if(sum==temp)
	{
		printf("%d is a strong number\n",temp);
	}

	else
	{
		printf("%d is not a strong number\n",temp);
	}

	return 0;
}