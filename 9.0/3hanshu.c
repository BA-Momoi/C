#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int *int_input(int **p){
    *p=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("第%d:", i+1);
        scanf("%d", (*p)+i);
    }
    return *p;
}

int main()
{   
    int *p;
    int_input(&p);
    for(int i=0;i<10;i++){
        printf("%d ",p[i]);
    }
    return 0;
}