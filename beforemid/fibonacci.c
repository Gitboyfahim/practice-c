#include<stdio.h>
int main()
{
	int n,i,n1,n2,next;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	n1=1;
	n2=1;
	if(n>=1)
	{
		printf("1 ");
	}
	if(n>=2)
	{
		printf("1 ");
	}
	for(i=3;i<=n;i++)
	{
		next= (n1+n2);
		printf("%d ",next);
		n1=n2;
		n2=next;
	}
	return 0;
}











