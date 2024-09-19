#include<stdio.h>
int main()
{
int num,abvalue;
printf("Enter number: \n");
scanf("%d",&num);
if(num<0)
{
abvalue=num*(-1);
}
else
{
abvalue=num;
}
printf("Absolute value %d\n",abvalue);
	return 0;
}
