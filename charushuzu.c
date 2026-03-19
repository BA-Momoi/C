#include<stdio.h>

int main(void)
{
     int a[11],n,mid=0,temp=0;
    for(int i=0;i<=8;i++){
        printf("a[%d]=",i+1);
        scanf_s("%d",&a[i]);
    }
    for(int i=0;i<9;i++){
        mid=i;
        for(int j=i+1;j<9;j++){
            if(a[j]<a[mid]){
                mid=j;
            }
        temp=a[i];
        a[i]=a[mid];
        a[mid]=temp;
        }
    }
    for(int i=0;i<=8;i++){
        printf("a[%d]=%d ",i+1,a[i]);
    }
    printf("\n");
    printf("输入一个想插入的数:");
    scanf_s("%d",&n);
    a[9]=n;
    for(int i=0;i<9;i++){
        mid=i;
        for(int j=i;j<9;j++){
            if(a[j]<a[mid]) mid=j;   
        }
        temp=a[i];
        a[i]=a[mid];
        a[mid]=temp;
    }
    for(int i=0;i<10;i++){
        printf("a[%d]=%d ",i+1,a[i]);
    }
    
    return 0;
}