#include<stdio.h>
    int count_up=0;
    int count_low=0;
    int count_space=0;
    int count_digits=0;
    int count_other=0;
    int count_char_types(char brr[3][80]);
int main()
{
    
    char arr[3][80];
    for(int i=0;i<=2;i++){
        printf("请输入%d串字符:",i+1);
        fgets(arr[i],80,stdin);
        int k=0;
        while(arr[i][k]!='\0'){
            if(arr[i][k]=='\n'){
                arr[i][k]='\0';
            break;
            }
            k++;
        }
    }
    count_char_types(arr);
    printf("大写为%d\n",count_up);
    printf("小写为%d\n",count_low);
    printf("数字为%d\n",count_digits);
    printf("空格为%d\n",count_space);
    printf("其他字符为%d\n",count_other);
    return 0;
}
int count_char_types(char brr[3][80]){

    for(int i=0;i<3;i++){
        int j=0;
        while(brr[i][j]!='\0'){
            if(65<=brr[i][j]&&brr[i][j]<=90) count_up++;
            else if(97<=brr[i][j]&&brr[i][j]<=122) count_low++;
            else if(48<=brr[i][j]&&brr[i][j]<=57)count_digits++;
            else if(brr[i][j]==' ') count_space++;
            else count_other++;
            j++;
        }
    }
    return 0;
}