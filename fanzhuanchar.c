#include<stdio.h>
#include<string.h>
int main()
{
    void fz(char *q);
    char *p;
    char arr[11];
    printf("输入字符:");
    fgets(arr,11,stdin);
    arr[strcspn(arr,"\n")]='\0';
    p=arr;
    fz(p);
    printf("反转后的:%s",p);
    return 0;
}
void fz(char *q){
    int j=strlen(q)-1;
    int mid=strlen(q)/2;
    for(int i=0;i<mid;i++,j--){
        int temp=q[j];
        q[j]=q[i];
        q[i]=temp;
    }
}