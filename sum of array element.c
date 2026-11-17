#include <stdio.h>

int main()
{
int num[5],i,sum=0;

printf("enters numbers:\n");
for(i=0;i<5;i++)
{
 scanf("%d",&num[i]);
}
for(i=0;i<5;i++)
{
sum=sum +num[i];
}
printf("sum=%d",sum);
return 0;
}
