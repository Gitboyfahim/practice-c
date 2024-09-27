 #include<stdio.h>
int main()
{
int amount,payable;
printf("Enter ammount: \n");
scanf("%d",&amount);
if(amount<=5000)
{
	payable=(amount-(amount*0.05));
}
if(amount>5000)
{
	payable=(amount-((5000*0.05)+((amount-5000)*0.10)));
}
printf("Payable %d\n",payable);

	return 0;
}
