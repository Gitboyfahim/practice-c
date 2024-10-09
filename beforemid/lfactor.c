#include<stdio.h>
int main()
{
	int n,i,lf;
	printf("Enter number~ ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			lf=i;
		}

	}
	printf("Largest factor is %d\n",lf);



	return 0;
}
