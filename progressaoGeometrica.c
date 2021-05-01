/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1, q, n;
    
    scanf("%f %f %f", &a1, &q, &n);
    
    float an = a1*(pow(q,n-1)); 
    float sn = a1*(pow(q,n)-1)/(q-1);
    
    printf("%.2f\n", an);
    printf("%.2f", sn);

    return 0;
}
