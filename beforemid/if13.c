#include<stdio.h>
int main()
{

int s1,s2,s3;
	printf("Enter three sides of triangle: \n");
	 scanf("%d %d %d",&s1,&s2,&s3);
if((s1==s2) && (s2==s3))
{
	printf("Your triangle is equilateral\n");
}
else if(s1!=s2 && s2!=s3 && s3!=s1)
{
	printf("Your triangle is scalene\n");
}
else
{
	printf("Your triangle is isosceles\n");
}
	return 0;
}
