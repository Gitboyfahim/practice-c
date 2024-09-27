#include<stdio.h>
int main()
{
	char ch;
printf("Enter character: \n");
scanf("%c",&ch);
if((ch>='0' && ch<='9') || (ch>='a' && ch<='f') || (ch>='A' && ch<='F'))
		{
printf("%c is a hex digit\n",ch);
		}
else 

{
printf("Not a hex digit\n");
}
		
  



	return 0;
}
