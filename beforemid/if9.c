#include<stdio.h>
int main()
{
char ch;
printf("Enter character: \n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
printf("%c is a lowercase\n",ch);
}
else if(ch>='A' && ch<='Z')
{
printf("%c is an uppercase\n",ch);
}
else
{
printf("%c is not a alphabet\n",ch);
}
	return 0;
}
