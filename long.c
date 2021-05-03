#include <stdio.h>
#include <stdlib.h>

int main (){
    long a;

    scanf("%ld", &a);
    
    unsigned char* byte = NULL;
    byte = (unsigned char*) &a; //atribuindo o endereço da variavel 'a' ao ponteiro byte.
    
    for (int i = 0; i < 8; i++)
    {
       printf("%x ", byte[i]);
    }

    return 0;
}