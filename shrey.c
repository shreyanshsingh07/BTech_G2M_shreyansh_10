#include <stdio.h>

int main() {
    int n, i;
    float sum =0.0;
    printf("enter value of n");
    scanf("%d" ,&n);

    
    for(i=1;i<=n; i++){
        sum = sum =(1.0/i);
    }
    printf("sum of series=%.4f\n" ,sum);
    
    

    return 0;
}