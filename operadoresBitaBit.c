/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, result;
    
    scanf("%d %d", &a, &b);
    
    result = a & b;
    printf("and: %d\n", result);
    
    result = a | b;
    printf("or: %d\n", result);
    
    result = a ^ b;
    printf("exclusive or: %d\n", result);
    
    result = ~a;
    printf("complement a: %d\n", result);
    
    result = ~b;
    printf("complement b: %d\n", result);
    
    result = a >> 2;
    printf("shift A: %d\n", result);
    
    result = b << 2;
    printf("shift B: %d\n", result);

    return 0;
}
