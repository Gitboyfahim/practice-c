#include<stdio.h>
int main()
{
int num;
printf("Enter a number: \n");
scanf("%d",&num);
if((num%5==0)&&(num%7!=0))
{
	printf("YES\n");
}
else
{
	printf("NO\n");
}
	return 0;
}
