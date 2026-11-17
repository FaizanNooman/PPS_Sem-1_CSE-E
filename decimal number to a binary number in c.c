#include<stdio.h>
int main()
{
    long int num, binary=0, rem, original, place_value=1;
    printf("Enter a decimal number");
    scanf("%ld", &num);

    original=num;
    while (num>0)
    {
        rem=num%2;
        binary= binary+(rem*place_value);
        num=num/2;
        place_value=place_value*10;
    }
    printf("\n decimal number is %ld",original);
    printf("\n binary number is %ld",binary);
return 0;
}
