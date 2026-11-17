#include<stdio.h>
int main()
{
int n,i,j,sum=0;
printf("Enter The Number");
scanf("%d",&n);
printf("Prime Number");

for(j=2;j<=n;j++)
 {
  for(i=2;i<j;i++)
   {
    if(j%i==0)
     break;
    }
    if(j==i)
     {printf("\n%d", j);
      sum += j;
     }
    }
     printf("\nSum=%d\n",sum);
     return 0;
     }
