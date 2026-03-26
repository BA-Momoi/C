#include<stdio.h>

int main()
{
    void t(int arr[][3]);
    int arr[3][3];
    printf("输入三成三整数数组:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    t(arr);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("arr[%d][%d]=%d ",i,j,arr[i][j]);
            if(j==2) printf("\n");
        }
    }
    return 0;
}
void t(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=arr[j][i];
            arr[j][i]=arr[i][j];
            arr[i][j]=temp;
        }
    }
}