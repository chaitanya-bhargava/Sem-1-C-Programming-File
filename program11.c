#include<stdio.h>
#include<string.h>
int main()
{
    char* str;
    printf("Enter a string:\n");
    gets(str);
    int len=sizeof(str)/sizeof(char);
    printf("The reversed string is:");
    for(int i=len-1;i>-1;i--){
        printf("%c",str[i]);
    }
    return 0;
}