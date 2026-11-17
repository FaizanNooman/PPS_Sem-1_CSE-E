#include<stdio.h>
int main()
{
 int num1,num2,result;
 char operand;

 printf("\nEnter First Number:");
 scanf("%d",&num1);

 printf("\nEnter Second Number:");
 scanf("%d",&num2);

 printf("\nEnter The Operand:");
 scanf(" %c",&operand);

 switch(operand)
 {
   case '+': result=num1+num2;
             printf("Sum of %d and %d is %d",num1,num2,result);
             break;
   case '-': result=num1-num2;
             printf("Difference of %d and %d is %d",num1,num2,result);
             break;
   case '*': result=num1*num2;
             printf("Product of %d and %d is %d",num1,num2,result);
             break;
   case '/': result=num1/num2;
             printf("Divide of %d and %d is %d",num1,num2,result);
             break;
   default : printf("Invalid Operand");
             break;
  }
return 0;
}
