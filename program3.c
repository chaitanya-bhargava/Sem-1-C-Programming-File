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
int main()
{
    int a, b, c;
    int *bin1;
    int *bin2;
    int *binresult;
    bin1 = (int *)calloc(32, sizeof(int));
    bin2 = (int *)calloc(32, sizeof(int));
    binresult = (int *)calloc(32, sizeof(int));
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
    printf("The required output is %d", c);
    return 0;
}
