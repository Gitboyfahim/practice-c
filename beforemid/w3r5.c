#include<stdio.h>
int main()
{
	int l,h,perimeter,area;
	printf("Enter lenth: ");
	scanf("%d",&l);
	printf("Enter height: ");
	scanf("%d",&h);
	perimeter = 2*(l+h);
	area = l*h;
		printf("Perimeter of the rectangle = %d inches\n",perimeter);
	printf("Area of the rectangle = %d square inches\n",area);


	return 0;
}
