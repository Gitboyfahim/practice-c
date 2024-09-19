#include<stdio.h>
int main()
{
int num,a,b,c,min;
printf("Enter a 3-digit number: \n");
scanf("%d",&num);
a=num%10;
num=num/10;
b=num%10;
c=num/10;

if(a<b)
{
	min=a;
}
if(c<a)
{
	min=c;
}
printf("Minimum is %d\n",min);

	return 0;
}
