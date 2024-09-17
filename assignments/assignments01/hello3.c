#include<stdio.h>
int main()
{

int bsalary;
float deallo,hrallo,gross;
printf("Input Basic Salary: \n");
scanf("%d",&bsalary);
deallo=(bsalary*.4);
hrallo=(bsalary*.2);
gross=(bsalary+deallo+hrallo);

printf("Dearness allowance= %.2f \n",deallo);
printf("Home rent allowance= %.2f \n",hrallo);
printf("Gross salary= %.2f \n",gross);

	return 0;
}
