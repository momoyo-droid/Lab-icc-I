/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a1, r, n;
    
    scanf("%ld %ld %ld", &a1, &r, &n);
    
    long int an = a1+(n-1)*r;
    long int sn = n*(a1+an)/2;
    
    printf("%ld\n", an);
    printf("%ld", sn);

    return 0;
}
