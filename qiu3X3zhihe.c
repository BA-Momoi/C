#include<stdio.h>

int main()
{
    int a[3][3];
    printf("请输入一个3*3的矩阵：\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("请输入第%d行第%d列的元素：",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    int num=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            num+=a[i][j];
        }
    }
    printf("这个3*3的矩阵的元素之和为：%d\n",num);
    return 0;
}
