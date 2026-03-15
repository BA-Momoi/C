#include<stdio.h>

int main(void)
{
    int arr[10];
    printf("input 10 numbers:");
    for(int i=0;i<=9;i++){
        scanf_s("%d",&arr[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted numbers:");
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}