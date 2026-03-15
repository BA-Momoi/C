#include<stdio.h>
#include<math.h>
int main(void)
{
    int a[101];
    for(int i=1;i<=100;i++){
        a[i]=i;
    }
    a[1]=0;
    for(int i=2;i<=sqrt(100);i++){
        for(int j=i+1;j<=100;j++){
            if(a[i]!=0 && a[j]!=0 && a[j] % a[i] == 0){
                a[j]=0; 
                break;
            }
        }
    }
    int n=0;
    printf("1-100之间的素数有:");
    for(int i=1;i<100;i++){
        if(a[i]==0){
            
        }else{
            if(n%10==0){
                printf("\n");
            }
            printf("%5d ",a[i]);
            n++;
        }
    }
    return 0;
}