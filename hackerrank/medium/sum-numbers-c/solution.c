#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // 1. Declare variables
    int int1, int2;
    float float1, float2;
    
    // 2. Read inputs from stdin
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    
    // 3. Print the sum and difference of the integers
    printf("%d %d\n", int1 + int2, int1 - int2);
    
    // 4. Print the sum and difference of the floats
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);
    
    return 0;
}
