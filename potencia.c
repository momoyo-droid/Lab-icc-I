#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;
    
    scanf("%lf %lf", &a, &b);
    
    double result = pow(a,b);
    
    printf("resultado é: %.4lf", result);
    
    return 0;
}