#include<stdio.h>
int main()

{
	int monthnum;
printf("Enter number of month[1-12]: \n");
scanf("%d",&monthnum);
 
if(monthnum==1)
{
printf("Days =31\n");
}

else if(monthnum==2)
{
printf("Days =28 or  29[If Leapyear]\n");
}

else if(monthnum==3)
{
printf("Days =31\n");
}

else if(monthnum==4)
{
printf("Days =30\n");
}

else if(monthnum==5)
{
printf("Days =31\n");
}

else if(monthnum==6)
{
printf("Days =30\n");
}

else if(monthnum==7)
{
printf("Days =31\n");
}

else if(monthnum==8)
{
printf("Days =31\n");
}

else if(monthnum==9)
{
printf("Days =30\n");
}

else if(monthnum==10)
{
printf("Days =31\n");
}

else if(monthnum=11)
{
printf("Days =30\n");
}

else if(monthnum=12)
{
printf("Days =31\n");
}

else
{
printf("Month number is invalid\n");
}

	return 0;
}
