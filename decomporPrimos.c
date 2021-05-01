/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int ehPrimo (int n)
{
    char flag;
    
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            break;
        }
    }  
    
    if (flag == 0)
    {
       return 1;
    }
    return 0;
}

void decompor (int n)
{
    int count = 0;
    
    for (int i = 2; i <= n; i++)
    {
        if (n%i == 0)
        {
            count++;
            n /= i;
            while (n%i == 0)
            {
                count++;
                n /= i;
            }  
            printf("%d %d\n", i, count);
        }
        count = 0;
    }
    
}

void print(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (ehPrimo(i))
        {
            printf("eh primo: %d\n", i);
        }
        else
        {
            printf("nao eh primo: %d\n", i);
        }
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
   
    if (n == 0)
    printf("Programa finalizado! Digite um número positivo n > 1");
    
    decompor(n);
    
    return 0;
}




