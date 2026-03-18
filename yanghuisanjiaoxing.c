#include<stdio.h>
int main(void)
{
    int n;
    printf("请输入一个杨辉三角形的行数：");
    scanf_s("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                a[i][j]=1;                
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
        }
        printf("\n");
    }
    return 0;
}