/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int op;
    int wr1 = 0, wr2 = 0;
    int sumWord1 = 0, sumWord2 = 0;
    char string[2][10];
    char ch;
    
    scanf("%d\n", &op);
    
    for (int i = 0; i < 2; i++)
    {
        scanf("%s\n", string[i]);
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            string[i][j]=tolower(string[i][j]);
        }
    }
   
    switch (op)
    {
        case 1:
            
        if (strlen(string[0]) > strlen(string[1]))
        {
            printf("1");
        }
        else if (strlen(string[0]) < strlen(string[1]))
        {
            printf("2");
        }
        break;
            
        case 2:
        if (strcmp(string[0], string[1]) < 0)
        {
            printf("1");
        }
        else if (strcmp(string[0], string[1]) > 0)
        {
            printf("2");
        }
        break;
            
        case 3:
            
        for (int i = 0; i < strlen(string[0]); i++)
        {
            if (string[0][i] != '\0')
            {
                sumWord1 += string[0][i];
            }
        }
            
        for (int j = 0; j < strlen(string[1]); j++)
        {
            if (string[1][j] != '\0')
            {
                sumWord2 += string[1][j];
            }
        }
           
        if (sumWord1 > sumWord2)
        {
            printf("1");
        }
        else if (sumWord2 > sumWord1)
        {
            printf("2");
        }
        else
        {
            printf("0");
        }
            
        break;
    
        case 4:
        
        scanf("%c\n", &ch);
        ch = tolower(ch);
        
        for (int i = 0; i < strlen(string[0]); i++)
        {   
            if (string[0][i] == ch)
            {
                wr1++;
            }
        }
        
        for (int j = 0; j < strlen(string[1]); j++)
        {   
            if (string[1][j] == ch)
            {
                wr2++;
            }
        }
        
        if (wr1 > wr2)
        {
            printf("1");
        }
        else if (wr2 > wr1)
        {
            printf("2");
        }
        else
        {
            printf("0");
        }
        
        break;
        
        case 5:
        
        scanf("%c\n", &ch);
        ch = tolower(ch);
       
        int oc1 = 0, oc2 = 0;
       
        for (int i = 0; i < strlen(string[0]); i++)
        {
            if(string[0][i] == ch)
            {
                oc1 = i+1;
                break;
            }
        }
        
        for (int j = 0; j < strlen(string[1]); j++)
        {
            if(string[1][j] == ch)
            {
                oc2 = j+1;
                break;
            }
        }
        
        if (oc1 > oc2)
        {
            printf("2");
        }
        else if (oc2 > oc1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        break;
    }

    return 0;
}




