#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exchange (char c, char* word, int *n)
{
    int sizeW = strlen(word);

    for (int i = 1; i < sizeW; i++)
    {
        if (word[i] == c)
        {
            word[i] += i;
            (*n)++;
        }
    }
}

int main ()
{
    char letter, word[30];
    char wordCpy[30];
    int n = 0;

    scanf("%c\n%s", &letter, word);
    strcpy(wordCpy, word);
    
    exchange(letter, word, &n);
    printf("Número de trocas: %d\n", n); 
    printf("Nova palavra: %s\n", word);
    printf("Palavra Original: %s", wordCpy);

    return 0;
}
