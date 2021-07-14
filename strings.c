#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20

int main(){
   
   char* str1 = (char*) malloc(SIZE*(sizeof(char)));
   char* str2 = (char*) malloc(SIZE*(sizeof(char)));
   
   scanf("%s\n%s", str1, str2);

   if(strcmp(str1, str2) == 0){
        printf("iguais\n");
   }else if(!strcmp(str1, str2) == 0){
       if(strlen(str1) < SIZE || strlen(str2) < SIZE){
           char* aux = strcat(str1, str2);
           printf("%s\n", aux);
       }else if(!strlen(str1) < SIZE || !strlen(str2) < SIZE){
           str1 = (char*) realloc(str1, sizeof(char)*20);
           char* aux = strcat(str1, str2);
           printf("%s\n", aux);
       }
   }
   
   
   
   
    return 0;
}