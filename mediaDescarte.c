#include <stdio.h>
#include <stdlib.h>

double menor(double vec[4])
{
    double menor = vec[0];
    
    for (int i = 1; i < 4; i++)
    {
        
        if (vec[i] < menor) // 5 4 2 7;
        {
            menor = vec[i];
        }
    }
    
    return menor;
}

void calc(double vec[4])
{
    double media;
    
    double valorMin = menor(vec);
    
    media = (((vec[0]+vec[1]+vec[2]+vec[3])-(valorMin))/3);
    
    printf("%.4lf", media);
}

int main()
{
    double vec[4];
    
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf ", &vec[i]);
    }
    
    menor(vec);
    calc(vec);
    
    return 0;
}