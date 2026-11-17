#include<stdio.h>
int main()
{
int i, n, max;
printf("enter the number of elements: ");
scanf("%d", &n);
int arr[n];
// declare an array of size n
for(i = 0; i < n; i++)
{
printf("enter element %d: ", i + 1);
scanf("%d", &arr[i]);
}
max = arr[0];
// assume the first element is the maximum
for(i = 1; i < n; i++)
{
if(arr[i] > max)
{
max = arr[i];
// update max if current element is greater
}
}
 printf("The maximum element in the array is: %d\n", max);
 return 0;
 }
