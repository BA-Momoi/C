#include<stdio.h>
#include<string.h>
int str_cmp(char arr_cmp[2][1000]);
int main(){
    char arr[2][1000];
    printf("请输入第一个字符串进行比较:");
    fgets(arr[0],1000,stdin);
    arr[0][strcspn(arr[0], "\n")] = '\0';
    printf("请输入第二个字符串进行比较:");
    fgets(arr[1],1000,stdin);
    arr[1][strcspn(arr[1], "\n")] = '\0';
    int result = str_cmp(arr);
    if(result == 0){
        printf("s1=s2");
    }else if(result == 1){
        printf("s1>s2");
    }else {
        printf("s1<s2");
    }
}
int str_cmp(char arr_cmp[2][1000]){
    int arr_len0=strlen(arr_cmp[0]);
    int arr_len1=strlen(arr_cmp[1]);
    int arr_mid_len=arr_len0>arr_len1?arr_len1:arr_len0;
    for(int i=0;i<arr_mid_len;i++){
        if(arr_cmp[0][i]>arr_cmp[1][i]){
            return 1;
        }else if(arr_cmp[0][i]<arr_cmp[1][i]){
            return -1;
        }
    }
     if(arr_len0 > arr_len1){
        return 1;
    }else if(arr_len0 < arr_len1){
        return -1;
    }else{
        return 0;
    }
    
}//历经我断断续续两个小时完成了，呵呵哒
