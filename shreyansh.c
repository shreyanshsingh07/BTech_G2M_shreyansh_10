#include<stdio.h>
int main(){
      int r,c;

      printf ("Enter numbers of rows and columns: ");
      scanf("%d %d" ,&r ,&c);

      int m[r][c], t[c][r];
      printf("\nEnter matrix elements:\n");
      for(int i = 0;i < r;++i) {
        for(int j = 0; j< c; ++j) {
            printf("Enter elements a%d%d:",i+1,j+1);
            scanf("%d", &m[i][j]);

        }
    }

    for(int i= 0;i < r;++i) { 
    for(int j = 0;j < c; j++){
    t[j][i] = m[i][j];
    }
 }
 printf("\nTranspose of the matrix:\n");
 for(int i = 0;i < r; ++i){
    for(int j = 0;j < r;++j){
        printf("%d", t[i][j]);
        if(j == r-1)
        printf("\n");
    }
        
 
 }

    
    return 0;
 }