#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter dividend:");
    scanf("%f",&a);
    printf("Enter divisor:");
    scanf("%f",&b);
    if(b==0){
        printf("Cannot divide by 0");

    }else{
        printf("The quotient is:%.2f",a/b);
    }
    return 0;
}