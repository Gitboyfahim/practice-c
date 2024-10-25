#include<stdio.h>
int main()
{

	int rad;
	float perimeter,area;
	printf("Enter radius in inches: ");
	scanf("%d",&rad);
	perimeter = 2*3.14*rad;
	area = 3.14*rad*rad;
	printf("Perimeter of the circle = %f inches\n",perimeter);
	printf("Area of the circle = %f square inches\n",area);

	return 0;
}
