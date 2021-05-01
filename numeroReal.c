#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    
    scanf("%f", &a);
    
    printf("parte inteira: %d\n", (int) a);
    printf("parte fracionada: %.4f\n", a - (int) a);
    printf("parte arredondada: %d", (int)round(a));
    
    return 0;
}