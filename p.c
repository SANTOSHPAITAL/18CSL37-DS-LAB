#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    scanf("%*[^:]%*2c%[^\n]",str);
    printf("%s",str);
    return 0;
}