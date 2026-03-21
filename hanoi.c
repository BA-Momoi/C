#include<stdio.h>

int main(void)
{
    void hanoi(int n,char a,char b,char c);
    int m;
    char a='a',b='b',c='c';
    printf("input hanoi:");
    scanf_s("%d",&m);
    hanoi(m,a,b,c);
    return 0;
}
void hanoi(int n,char a,char b,char c){
    if(n==1){
        printf("%c-->%c\n",a,c);
    }
    else{
        hanoi(n-1,a,c,b);
        printf("%c-->%c\n",a,c);
        hanoi(n-1,b,a,c);
    }


}