#include<stdio.h>
int main()
{
    int sum=0;
    int *arr1;
    int i=0;
    char ans;
    while(1){
        label1:
        printf("Enter the age of employee %d\n",i+1);
        scanf("%d",&*(arr1+i));
        getchar();
        sum+=*(arr1+i);
        i++;
        label2:
        printf("Do you want to enter more employees[y/n]:\n");
        scanf("%c",&ans);
        getchar();
        switch (ans)
        {
        case 'y':
            goto label1;
        case 'n':
            goto end;
        default:
            printf("Please enter valid answer!\n");
            goto label2;
            break;
        }
    }
    end:
    float avg=(float)sum/i;
    printf("Average age of employees is %.2f",avg);
    return 0;
}