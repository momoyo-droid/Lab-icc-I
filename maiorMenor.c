#include <stdio.h>
#include <stdlib.h>

int main (){
    int *n;
    int tam = 0;

    n = (int*)malloc(1*sizeof(int)); //alocando bloco de memória para o vetor n

    if (n == NULL){ 
        printf("Não foi possível alocar memória");
        exit(1);
    }

    while (!feof(stdin)){//leia do teclado enquanto nao for o final do arq
        scanf("%d\n", &n[tam]);
        tam++;
        n = (int*)realloc(n,(tam+1)*sizeof(int));//alocando espaço de memória para proximo numero
    }
    // print p ve se funciona
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", n[i]);
    }
    
    //encontrando o maior numero e menor numero
    int maior = n[0], menor = n[0];

    for (int i = 1; i < tam; i++){
        if (maior < n[i]){
            maior = n[i];
        }else if (menor > n[i]){
            menor = n[i];
        }
    }
   
    printf("menor: %d\n", menor);
    printf("maior: %d", maior);
    
    return 0;
}