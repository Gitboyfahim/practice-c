#include<stdio.h>
int main()
{

	int dis,sfuel;
	float avg;

	printf("Input total distance in km: ");
	scanf("%d",&dis);
	printf("Input total fuel spent in liters: ");
	scanf("%d",&sfuel);

	avg=(dis/sfuel);
		printf("Average consumption (km/lt) %.2f\n",avg);

	return 0;
}
