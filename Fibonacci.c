#include<stdio.h>

int main(void)
{
    int i,arr[20]={1,1};
    for(i=2;i<=19;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<=19;i++){
        if(i%5==0) printf("\n");
        printf("%d ",arr[i]);
    }
    return 0;
}