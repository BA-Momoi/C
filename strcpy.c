#include<stdio.h>

int main()
{
    char arr[20]="I love you";
    char brr[20];
    char *p=arr,*q=brr;
    while(*q++ = *p++);
    printf("%s\n",arr);
    printf("%s\n",brr);
    return 0;
}