#include<stdio.h>
int main()

{
int year;
printf("Enter a year: ");
scanf("%d",&year);

if((year%4==0 && year%100!=0)||year%400==0)
{
printf("366 days\n");
}
else
{
printf("365 days\n");
}

        return 0;
}

