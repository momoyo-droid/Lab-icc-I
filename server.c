#include<stdio.h>
#include<stdlib.h>

#define SIZE 12

int main(){
    
    double hour[SIZE];

    for (int month = 1; month <= SIZE; month++)
    {
        scanf("%lf\n", &hour[month]);
        printf("%d %.2lf\n", month, hour[month]);
    }
    
    double greatestH = hour[1];
    int i;

    for (int month = 2; month <= SIZE; month++)
    {
        if (greatestH < hour[month]){
            greatestH = hour[month];
            i = month;
        }

    }
    
    printf("%d %.2lf", i, greatestH);  
    
    return 0;
}