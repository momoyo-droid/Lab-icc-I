#include <stdio.h>
#include <stdlib.h>

void calc(float num1, char operator, float num2)
{
    switch (operator)
    {
        case '+':
        printf("%.6f", num1+num2);
        break;
        
        case '-':
        printf("%.6f", num1-num2);
        break;
        
        case '*':
        printf("%.6f", num1*num2);
        break;
        
        case '%':
        printf("%.6f", (num1/num2)*100);
        break;
    }
}

int main()
{
    float a, b;
    char op;
    
    scanf("%f %c %f", &a, &op, &b);
    
    calc(a, op, b);
    
    return 0;
}