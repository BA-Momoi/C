#include<stdio.h>

int main()
{
    int binary_search(int brr[],int biao_len,int b);
    int arr[15];
    int a;
    int j=0;
    int temp;
    printf("数组内的数：");
    for(int i=15;i>=1;i--){
        printf("%d ",arr[j++]=i);
    }
    printf("\n");
    printf("请输入要查找的数:");
    scanf("%d",&a);
    temp=binary_search(arr,15,a);
    if(temp==-1){
        printf("无此数");
    }else{
        printf("下标：%d",temp);
    }
    return 0;
}
int binary_search(int brr[],int brr_len,int b){
    int low,right;
    low=0;
    right=brr_len-1;
    while(right>=low){
        int mid=(low+right)/2;
        if(brr[mid]==b){
            return mid;
        }
        else if(brr[mid]>b){
            low=mid+1;
        }   
        else if(brr[mid]<b){
            right=mid-1;
        }
        
    }
    return -1;
}
