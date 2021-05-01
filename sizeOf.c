/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char: %d bytes\n", sizeof(char));
    printf("unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("short int: %d bytes\n", sizeof(short int));
    printf("int: %d bytes\n", sizeof(int));
    printf("unsigned long int: %d bytes\n", sizeof(unsigned long int));
    printf("long long int: %d bytes\n", sizeof(long long int));
    printf("float: %d bytes\n", sizeof(float));
    printf("double: %d bytes\n", sizeof(double));
    printf("long double: %d bytes\n", sizeof(long double));
    
    return 0;
}
