/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    double a;
    int b;
    
    scanf("%lf %d", &a, &b);
    
    if (b == 0)// se b = 0, o valor retornado é igual a 1.
    {
        printf("o resultado da potenciacao eh: 1");
        exit(1);
    }
    else if (a == 1)// b pode ser qualqquer num q o resultado smpre será 1.
    {
        printf("o resultado da potenciacao eh: 1");
        exit(1);
    }
    
    double c = a;
    
    for (int i = 0; i < b-1; i++)
    {
        a = a*c;
    }
    printf("o resultado da potenciacao eh: %.4lf", a);

    return 0;
}
