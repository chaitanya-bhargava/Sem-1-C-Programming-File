#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fileptr;
    char ch;
    fileptr=fopen(argv[1],"w");
    if (fileptr!=NULL){
        printf("Enter character by character:\n");
        do {
            scanf(" %c",&ch);
            fputc(ch,fileptr);
        }while(ch!='$');
    }
    fclose(fileptr);
    return 0;
}
