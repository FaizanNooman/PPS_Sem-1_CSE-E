#include<stdio.h>
int main()
{
int n,i=2,j=2,sum=0;
printf("Enter The Number");
scanf("%d",&n);
printf("Prime Number");

while(j<=n)
{
  while(i<j)
   {
    if(j%i==0)
     break;
     i++;
   }
   if(j==i)
    {
      printf("\n%d", j);
      sum +=j;
    }
     j++;
    }
     printf("\nSum=%d\n",sum);
     return 0;
     }
