#include<stdio.h>
#include<string.h>
void low_up_int(int *a,int *b,int *c){
    // 简单的冒泡排序逻辑
    if(*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if(*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    printf("%d %d %d\n",*a,*b,*c);
}
void swap(char **a, char **b){
    char *temp = *a;
    *a = *b;
    *b = temp;
}
void low_up_str(char *p[]){
    if(strcmp(p[0],p[1])>0)
        swap(&p[0],&p[1]);
    if(strcmp(p[1],p[2])>0)
        swap(&p[1],&p[2]);
    if (strcmp(p[0],p[1])>0)
        swap(&p[0],&p[1]);
    for(int i=0;i<3;i++){
        printf("%s\n",p[i]);
    }
}
int main()
{
    void low_up_int(int *,int *,int *); 
    void low_up_str(char *p[]);
    int *arr[3];
    char *str[3]={"hello","the","world"};
    int a[3]={1,2,3};
    arr[0]=&a[0];
    arr[1]=&a[1];
    arr[2]=&a[2];
    printf("%d %d %d",*arr[0],*arr[1],*arr[2]);
    low_up_str(str);
    low_up_int(arr[0],arr[1],arr[2]);
    return 0;
}