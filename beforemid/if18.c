 #include<stdio.h>
int main()
{
char ch;
int ope1st,ope2nd;
printf("Enter operator: \n");
scanf("%c",&ch);
printf("Enter 1st operand: ");
scanf("%d",&ope1st);
printf("Enter 2nd operand: ");
scanf("%d",&ope2nd);

switch(ch)
{
	case '+' :
		printf("Result is:%d\n", (ope1st+ope2nd));
		break;
	case '-' :
                printf("Result is:%d\n", (ope1st-ope2nd));
                break;
	case '*' :
                printf("Result is:%d\n", (ope1st*ope2nd));
                break;
	case '/' :
                printf("Result is:%d\n", (ope1st/ope2nd));
                break;

	default:
		printf("Enter two valid numbers\n");
		break;
}




	return 0;
}
