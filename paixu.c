#include<stdio.h>
#include<math.h>
int enterarr(int n){
    printf("arr[%d]=",n+1);
    scanf_s("%d",&n);
    return n;
}
int main(void)
{
    int arr[11],temp,min;
    for(int i=0;i<10;i++){
        arr[i] = enterarr(i);
    }
    printf("\n");
    /*for(int i=0;i<10;i++){
        
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                //为什么教材上的还要用mid来代替i，再拿去和对比；很烦
                //教材写法
                //for(int i=1;i<=9;i++){
                //min=i;
                //for(j=i+1;j<=10;j++)
                //if(arr[j]<arr[min]) min=j;
                //temp=arr[i]; arr[i]=arr[min]; arr[min]=temp;}
                //这写法啥区别，搞不懂教材又麻烦又不清晰，直接上面
            }
        }
    }好了，现在我感觉还是排序好，快,有点晦涩，但是好快*/
    for(int i=0;i<10;i++){
        min=i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[min]) min=j;//3 2 1
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    int n=0;
    for(int i=0;i<10;i++){
        if(n%2==0){
            printf("\n");
        }
        printf("arr[%d]=%d  ",i+1,arr[i]);
        n++;
    }
    printf("this is my Momoi in 15.3.2026");
    return 0;
}
