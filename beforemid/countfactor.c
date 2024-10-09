#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter number~ ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if( n%i ==0)
		{
			count= (count+1);
		}

	}
	printf("Total factor count~ %d\n",count);


	return 0;
}
