/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num;
   
   scanf("%d", &num);
   
   if (num % 4 == 0)
   {
       printf("SIM");
   }
   else
   {
       printf("NAO");
   }

    return 0;
}
