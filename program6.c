#include<stdio.h>
#include<string.h>
int main()
{
    char *str;
    printf("Enter the string:\n");
    gets(str);
    int count=0;
    for(int i=0;;i++){
        if (*(str+i)=='\0'){
            break;
        }
        count=count+1;
    }
    printf("The size of string is %d",count);
    return 0;
}