#include<stdio.h>

int main()
{
int arr[100],n,i,max,min;
printf("enter the number of elements:");
scanf("%d",&n);

printf("enter %d number:",n);

for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
max=min=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>max)
max=arr[i];

if(arr[i]<min)
min=arr[i];
}
printf("maximum=%d\n",max);
printf("minimum=%d\n",min);

return 0;
}
