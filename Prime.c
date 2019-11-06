// Program to find the prime nos. till 999

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
