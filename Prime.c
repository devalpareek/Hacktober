/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    printf("Prime nos. till 999\n");
    for(i = 2 ; i<999 ; i++){
        int c = 0;
        int n = sqrt(i);
        for(j = 2;j<=n ;j++){
            if(i%j == 0){
                c++;
                break;
            }
        }
        if(c == 0){
            printf("%d ",i);
        }
    }
    
    
    return 0;
}
