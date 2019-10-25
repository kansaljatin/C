#include <stdio.h>
#include <string.h>
#include <math.h>
int main() 
{
    int n;
    scanf("%d", &n);
    
    for(int i = n; i >= 1; i--){
        int j=n;
        while(j > i)
            printf("%d ", j);
            j--;
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    for(int i = 1; i < n; i++){
        int j=n;
        while(j > i)
            printf("%d ", j);
            j--;
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    return 0;
}
