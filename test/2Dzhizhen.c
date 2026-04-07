#include<stdio.h>
#include<string.h>
typedef struct{
    int id;
    int eid;
}id;

int apt(int (*p)[2]);
int bpt(int *p);
int main()
{
    id myid;
    myid.id=114514;
    myid.eid=415411;
    int *p;
    p=&myid.id;
    printf("%d %d",*p,*(p+1));
    int arr[2][2]={{1,2},{3,4}};
    apt(arr);
    bpt(*arr);
    return 0;
}
int apt(int (*p)[2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("a[%d][%d]=%d ",i+1,j+1,*(*(p+i)+j));
        }
    }
    printf("\n");
    return 0;
}
int bpt(int *p){
    for(int i=0;i<4;i++){
        
        printf("a[%d]=%d ",i,*(p+i));
    }
    return 0;
}