#include<stdio.h>
int main()
{

int n1,n2,n5,n10,n20,n50,n100,n500,n1000,amount;
printf("Enter amount: \n");
scanf("%d",&amount);
n1000=amount/1000;
amount=amount%1000;
n500=amount/500;
amount=amount%500;
n100=amount/100;
amount=amount%100;
n50=amount/50;
amount=amount%50;
n20=amount/20;
amount=amount%20;
n10=amount/10;
amount=amount%10;
n5=amount/5;
amount=amount%5;
n2=amount/2;
amount=amount%2;
n1=amount/1;

printf("1000: %d\n500: %d\n100: %d\n50:  %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n",n1000,n500,n100,n50,n20,n10,n5,n2,n1);


	return 0;
}
