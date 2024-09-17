#include<stdio.h>
int main()

{
int num,sum,a,b,c,d;
printf("Enter four digit number: \n");
scanf("%d",&num);
a=num%10;
num=num/10;
b=num%10;
num=num/10;
c=num%10;
d=num/10;
sum=a+d;
printf("Sum of the 1st and last digit of your number is %d\n",sum);

	return 0;
}
