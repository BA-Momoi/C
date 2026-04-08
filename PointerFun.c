#include<stdio.h>

int max(int, int);
int low(int, int);

int main()
{
    int fun(int ,int ,int ,int (*p)(int ,int ));
    int a=1;
    int b=2;
    fun(a,b,1,max);
    return 0;
}
int fun(int x,int y,int a,int (*p)(int ,int )){
    if(a==1)
    printf("%d\n",(*p)(x,y));
    else if(a==2)
    printf("%d\n",(*p)(x,y));
    return 1;
}
int max(int a,int b){
    return (a>b)?a:b;
}
int low(int a,int b){
    return (a<b)?a:b;
}