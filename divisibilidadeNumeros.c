// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    long int num[31];
    
    for (int i = 0; i < 31; i++)
    {
        scanf("%ld\n", &num[i]);
    }
    
   // printf("num[0]: %ld, num[31]: %ld", num[0], num[30]);
    
    for (int j = 0; j < 30; j++)
    {
        if(num[j]%num[30]==0)
        {
            printf("%ld\n", num[j]);
        }
    }
    
    
    return 0;
}