#include<stdio.h>
int main()
	{
		int n,i,sum=0,factor;
		printf("Enter number~ ");
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i == 0)
			{
				factor=i;
				sum = (sum+factor);
			}

		}
		if(sum == n)
		{
			printf("N is a perfect number\n");
		}
		else
		{
			printf("N is not a perfect number\n");
		}

		return 0;
	}
	

