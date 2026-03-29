#include<stdio.h>
#include<string.h>
int main()
{
    int cj[10][5];
    int row=0;
    int col=0;
    void pjf(int arr[][5],int ,int );
    void kmpjf(int arr[][5],int ,int );
    void kmmax(int arr[][5],int ,int );
    for(int i=0;i<10;i++){
        printf("    第%d位\n",i+1);
        row++;
        for(int j=0;j<4;j++){
            printf("%d科目=",j+1);
            scanf("%d",&cj[i][j]);
            if(i==0) col++;
        }
    }
    printf("\n");
    pjf(cj,row,col);
    kmpjf(cj,row,col);
    kmmax(cj,row,col);
    return 0;
}
void pjf(int arr[][5],int row,int col){
    int ans=0;
    for(int i=0;i<row;i++){
        ans=0;
        for(int j=0;j<col;j++){
            ans+=arr[i][j];
        }
        printf("第%d位平均分为%d ",i+1,ans/col);
    }
    printf("\n");
}
void kmpjf(int arr[][5],int row,int col){
    int ans=0;
    for(int j=0;j<col;j++){
        ans=0;
        for(int i=0;i<row;i++){
            ans+=arr[i][j];
        }
        printf("第%d科平均分为%d ",j+1,ans/row);
    }
    printf("\n");
}
void kmmax(int arr[][5],int row,int col){
    int xy[2];
    int temp=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(temp<arr[i][j]){ 
                temp=arr[i][j];
                xy[0]=i;
                xy[0]=j;
            }
        }
    }
    printf("第%d科最高分%d ",xy[0]+1,temp);
    printf("\n");
}