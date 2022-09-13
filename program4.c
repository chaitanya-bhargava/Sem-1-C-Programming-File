#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void decimaltobinary(int dec, int *bin)
{
    int i;
    for (i = 31; dec > 0; i--)
    {
        bin[i] = dec % 2;
        dec = dec / 2;
    }
}
unsigned int binarytodecimal(int *bin)
{
    unsigned int dec = 0;
    for (int i = 0; i < 32; i++)
    {
        dec += bin[31 - i] * pow(2, i);
    }
    return dec;
}
int andbit(int a, int b)
{
    if (a == 1 && b == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int orbit(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int xorbit(int a, int b)
{
    if (a == 0 && b == 0)
    {
        return 0;
    }
    else if (a == 1 && b == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int notbit(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a, b, c, n;
    int *bin1;
    int *bin2;
    int *binresult;
    bin1 = (int *)calloc(32, sizeof(int));
    bin2 = (int *)calloc(32, sizeof(int));
    binresult = (int *)calloc(32, sizeof(int));
    while(1){
    label:
    printf("Welcome to my program:\n1.AND Operation\n2.OR Operation\n3.XOR Operation\n4.NOT Operation\n5.Exit\nChoose a number[1/2/3/4/5]");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Enter number a\n");
        scanf("%d", &a);
        printf("Enter number b\n");
        scanf("%d", &b);
        printf("You entered %d and %d\n", a, b);
        decimaltobinary(a, bin1);
        decimaltobinary(b, bin2);
        for (int i = 31; i >= 0; i--)
        {
            binresult[i] = andbit(bin1[i], bin2[i]);
        }
        c = binarytodecimal(binresult);
    }
    else if (n == 2)
    {
        printf("Enter number a\n");
        scanf("%d", &a);
        printf("Enter number b\n");
        scanf("%d", &b);
        printf("You entered %d and %d\n", a, b);
        decimaltobinary(a, bin1);
        decimaltobinary(b, bin2);
        for (int i = 31; i >= 0; i--)
        {
            binresult[i] = orbit(bin1[i], bin2[i]);
        }
        c = binarytodecimal(binresult);
    }
    else if (n == 3)
    {
        printf("Enter number a\n");
        scanf("%d", &a);
        printf("Enter number b\n");
        scanf("%d", &b);
        printf("You entered %d and %d\n", a, b);
        decimaltobinary(a, bin1);
        decimaltobinary(b, bin2);
        for (int i = 31; i >= 0; i--)
        {
            binresult[i] = xorbit(bin1[i], bin2[i]);
        }
        c = binarytodecimal(binresult);
    }
    else if (n == 4)
    {
        printf("Enter number a\n");
        scanf("%d", &a);
        printf("You entered %d\n", a);
        decimaltobinary(a, bin1);
        for (int i = 31; i >= 0; i--)
        {
            binresult[i] = notbit(bin1[i]);
        }
        c = binarytodecimal(binresult);
    }
    else if(n==5){
        printf("Exiting...");
        goto end;
    }
    else
    {
        printf("Please enter a valid value!\n");
        goto label;
    }
    printf("The required output is %d\n", c);
    printf("\n");
    }
    end:
    return 0;
}