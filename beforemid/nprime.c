#include<stdio.h>
int main()
{

	int n,i,j,prime=0,count=0;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	printf("First %d prime numbers are\n",n);

	for(i=2;prime<n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{

			if(i%j==0)
			{
				count= count+1;
			}

		}
		if(count==2)
		{

			printf("%d ",i);
			prime= prime+1;


		}
	}

	return 0;
}
