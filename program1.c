#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    int b=a>>1;
    int c=a<<1;
    printf("On left shifting input number:%d\n",c);
    printf("On right shifting input number:%d\n",b);
    return 0;
}