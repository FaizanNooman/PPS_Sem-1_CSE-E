#include<stdio.h>
int main()
{
 int num,i;

 printf("Enter a Number:");
 scanf("%d",&num);

 printf("\n The list of even numbers are:");

 for(i=1;i<=num;i++)
 {
    if(i%2==0)
     printf("\t %d",i);
 }
return 0;

}
