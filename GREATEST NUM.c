#include<stdio.h>
int main()
{
 int a,b,c,d;
 printf("Enter Three Numbers: ");
 scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
if (a>b && a>c && a>d)
     printf("%d is the GREATEST",a);
else if(b>c && b>d)
    printf("%d is the GREATEST",b);
else if(c>d)
printf("%d is the GREATEST",c);
else
printf("%d is the GREATEST",d);
     }
