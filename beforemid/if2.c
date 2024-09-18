#include<stdio.h>
int main()
{

char ch;
printf("Please enter character: \n");
scanf("%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
{
printf("%c is an alphabet\n",ch);
}
else
{
printf("%d is not an alphabet\n",ch);
}
	return 0;
}
