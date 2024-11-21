#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2;
float dis;
printf("Enter x1: ");
scanf("%d",&x1);
printf("\nEnter y1: ");
scanf("%d",&y1);
printf("\nEnter x2: ");
scanf("%d",&x2);
printf("\nEnter x2: ");
scanf("%d",&y1);

dis=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("%f",sqrt(dis));

return 0;
}
