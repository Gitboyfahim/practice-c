 #include<stdio.h>
int main()
{
int ang1,ang2,ang3;
  printf("Enter 3 angles of triangle: \n");
scanf("%d %d %d",&ang1,&ang2,&ang3);
if((ang1+ang2+ang3==180) && (ang1!=0 && ang2!=0 && ang3!=0))
{
  printf("Triangle is valid\n");
}
else 
{
  printf("Triangle is not valid\n");
}
return 0;
}
