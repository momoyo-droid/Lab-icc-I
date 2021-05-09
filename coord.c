#include <stdio.h>
#include <stdlib.h>

struct Coordenadas{
    int x;
    int y;
};

double maiorMedia (struct Coordenadas pontos[5]){
    double media = (pontos[0].x+pontos[0].y)/2.00;//dizendo que a primeira coord é sempre a maior media
    int j = 0; //posicao das coords no vetor
    for (int i = 1; i < 5; i++){
        if (media < (pontos[i].x+pontos[i].y)/2.00){//comparando a media [0] com a seguinte
            media = (pontos[i].x+pontos[i].y)/2.00;//armazenando a maior media
            j = i;//atribuindo o indice da coord para j;
        }
    }
    printf("%.2lf %d %d", media, pontos[j].x, pontos[j].y);
    return media;
}

int main (){
    struct Coordenadas pontos[5];//vetor de coordenadas
    //leitura
    for (int i = 0; i < 5; i++){
        scanf("%d %d", &pontos[i].x, &pontos[i].y);
        printf("%d %d ", pontos[i].x, pontos[i].y);
    }
    printf("\n");
    maiorMedia(pontos);

    return 0;
}