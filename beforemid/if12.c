#include<stdio.h>
int main()
{
	int s1,s2,s3;
printf("Enter 3 sides of triangle: \n");
scanf("%d %d %d",&s1,&s2,&s3);
 	if((s1+s2>3) && (s2+s3>s1) && (s1+s3>s2))
printf("This triangle is valid\n");			
	else 
{
printf("This triangle is not valid\n");
}



	return 0;
}
