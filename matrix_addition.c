#include <stdio.h>

int main(){
    int A[3][3] = {{1,3,5},{2,4,6},{7,9,0}};
    int B[3][3] = {{0,1,0},{2,8,2},{3,1,6}};
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}