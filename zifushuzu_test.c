#include <stdio.h>
#include <string.h>

int main(void)
{

    /* 目标数组必须有足够空间来存放拼接后的字符串 */
    char a[100] = "hello world ";
    char b[] = "my name is Momoi";

    printf("%s\n", a);
    printf("%s\n", b);

    /* 使用 strncat 避免越界 */
    strncat(a, b,strlen(b)+1);
    printf("%s\n", a);
    return 0;
}