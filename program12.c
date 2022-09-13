#include <stdio.h>
int pasctri(int p, int q)
{
    if (p > 0 && q == 1)
    {
        return 1;
    }

    else if (p == q)
    {
        return 1;
    }
    else
    {
        return pasctri(p - 1, q - 1) + pasctri(p - 1, q);
    }
}
int main()
{
    int num;
    printf("Enter no of rows:\n");
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < i + 1; k++)
        {
            printf("%d ", pasctri(i, k));
        }
        printf("\n");
    }
    return 0;
}