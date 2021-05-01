#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int EncontraHipotenusaERetorna(int *vec)
{
    int hip = vec[0];
    
    for (int i = 1; i < 3; i++)
    {
        if (vec[i] > hip)
        {
            hip = vec[i];
            vec[i] = vec[0];
            vec[0] = hip;
        }
    }

    return pow(hip, 2);
}

int calc(int vec[3])
{
    int maiorLado = EncontraHipotenusaERetorna(vec);
    
    int cat = (pow(vec[1], 2)+pow(vec[2], 2));
    
    printf("cat: %d; vec0: %d, vec1: %d, vec2: %d", cat, vec[0], vec[1], vec[2]);
    if (maiorLado == cat)
    {
        printf("SIM");
    }
    else
    {
        printf("NAO");
    }
    
}

int main()
{
    int vec[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vec[i]);
    }
    
    EncontraHipotenusaERetorna(vec);
    calc(vec);
    
    return 0;
}