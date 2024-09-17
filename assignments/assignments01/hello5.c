#include<stdio.h>
int main()
{
 int totsell,totpro;
 float cprice;
 printf("Enter the total selling price of 15 items: \n");
 scanf("%d",&totsell);
 printf("Enter the total profit of 15 items: \n");
 scanf("%d",&totpro);
 cprice=(totsell-totpro)/15;
 printf("Cost price of one item is: %.2f \n",cprice);


	return 0;
}
