#include <stdio.h>
#include <stdlib.h>

#define SIZE 200

int main (){
    char string[SIZE];
    
    scanf("%s", string);
    printf("%s\n", string);

    unsigned int count = 0;//variavel p numeros positivos, evitando erro c valores negativos no 
    //calculo
    //virar p esquerda é negativo e direita é positivo
    for (int i = 0; i < SIZE; i++){
        if(string[i] == 'D'){
            count++;
        }else if (string[i] == 'E'){
            count--;//subtrai 1 do contador 
        }
    }

    if (count % 4 == 0){
        printf("norte");
    }else if (count % 4 == 1){
        printf("leste");
    }else if (count % 4 == 2){
        printf("sul");
    }else if (count % 4 == 3){
        printf("oeste");
    }

    return 0;
}