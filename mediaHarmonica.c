#include <stdio.h>
#include <stdlib.h>

float mediaHarmonica (int n, float *nota){
    float mh, denominador = (1/(nota[0]+1));
    
    for (int i = 1; i < n; i++){
        denominador +=(1/(nota[i]+1));
    }
    mh = ((n/denominador)-1);

    return mh;
}

int main (){
    int nTrabalhos;
    scanf("%d",&nTrabalhos);
    float nota[nTrabalhos];

    printf("Trabalhos: %d\n", nTrabalhos);

    for (int i = 0; i < nTrabalhos; i++){
        scanf("%f\n", &nota[i]);
        printf("Notas: %.2f\n", nota[i]);
    }
    mediaHarmonica(nTrabalhos, nota);
    float mh = mediaHarmonica(nTrabalhos, nota);
    printf("media harmonica = %.2f", mh);
    
    return 0;
}