#include<stdio.h>
#include<string.h>
char* str_cat(char arr_1[1000],char arr_2[]);
int main(void)
{
    char s1[1000],s2[1000];
    printf("请输入s1:");
    fgets(s1,1000,stdin);
    printf("请输入需要复制进s1的s2:");
    fgets(s2,1000,stdin);
    printf("%s",str_cat(s1,s2));
    return 0;
}
char* str_cat(char arr_1[1000],char arr_2[]){
    int arr_1_len=strlen(arr_1);
    int arr_2_len=strlen(arr_2);
    if(arr_1_len+arr_2_len>1000){
        printf("超出缓存：\n");
        return NULL;
    }
    for(int i=arr_1_len,j=0;j<arr_2_len;i++,j++){
        arr_1[i]=arr_2[j];
    }
    arr_1[arr_1_len+arr_2_len]='\0';
    return arr_1;
}