#include<stdio.h>
int main(void)
{
    int arr_a[2][3]={{1,2,3},{4,5,6}};
    int arr_b[3][2]={{0},{0},{0}};
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            printf("arr_a[%d][%d]=%d  ",i,j,arr_a[i][j]);
            arr_b[j][i]=arr_a[i][j];
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("arr_b[%d][%d]=%d  ",i,j,arr_b[i][j]);
        }
        printf("\n");
    }
    return 0;
}