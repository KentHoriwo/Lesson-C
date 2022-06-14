#include <stdio.h>

void main(){
    int x[2];
    int y[] = {1, 2, 3, 4};
    int z[2][3];

    for (int i = 0; i <= 2; i++) {
        x [i] = i;
        for (int j = 0; j <= 3; j++){
            z[i][j] = i + j;
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }

    
}