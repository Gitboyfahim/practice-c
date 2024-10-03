#include<stdio.h>
int main()

{
	float i=0,n,sum;
	printf("Enter the value of N: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("Sum= %.2f\n",sum);



	return 0;
}
