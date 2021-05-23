#include <stdio.h>
#include <stdlib.h>

int main (){
    int numFixo, numI, numJ;
    int multiplo = 0;
    int count = 0; //conta quantas vezes entrou no if
    
    scanf("%d\n%d\n%d", &numFixo, &numI, &numJ);
    printf("%d\n%d\n%d\n", numFixo, numI, numJ);
    
    while(count < numFixo){
        if (multiplo % numI == 0 || multiplo % numJ == 0){//calculo p encontrar os multiplos
           printf("multiplo: %d\n", multiplo);
           count++; //incrementação
        }
        multiplo++;//proximo multiplo
    }

    return 0;
}