#include<stdio.h>
int main()
{
float marksub1,marksub2,marksub3,marktotal,markaverage;
printf("Enter subject 1 mark: \n");
scanf("%f",&marksub1);
printf("Enter subject 2 mark: \n");
scanf("%f",&marksub2);
printf("Enter subject 3 mark: \n");
scanf("%f",&marksub3);
marktotal=marksub1+marksub2+marksub3;
markaverage=(marksub1+marksub2+marksub3)/3;
printf("The total is %.1f+%.1f+%.1f=%.2f\n",marksub1,marksub2,marksub3,marktotal);
printf("Average is %.2f divided by 3 equals %.2f\n",marktotal,markaverage);

return 0;
}
