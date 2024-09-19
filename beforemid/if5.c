#include<stdio.h>
int main()
{
int num1,num2,num3,max,min,largest2nd;
printf("Enter 1st 2nd and 3rd number: \n");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2)
{
	max=num1;
	min=num2;
}
	else
{
	max=num2;
	min=num1;
}
if(num3>max)
{
	max=num3;
}
else if(num3<min)
{
min=num3;
}

largest2nd=num1+num2+num3-max-min;
printf("2nd largest number is %d\n",largest2nd);

	return 0;
}
