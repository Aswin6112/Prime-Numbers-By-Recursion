#include<stdio.h>
int prime_number(int, int);
int main()
{
	int n,i,check;
	printf("enter a number: ");
	scanf("%d",&n);
	check=prime_number(n,n/2);
	if(check==1)
	{
		printf("%d is a prime number\n",n);
	}
	else
	{
		printf("%d is not a prime number\n",n);
	}
	return 0;	
}
int prime_number(int n, int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		if(n%i==0)
		{
			return 0;
		}
		else
		{
		     return prime_number(n,i-1);
		}	
	}
}
