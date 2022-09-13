#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee{
    char name[50];
    int age;
    char degree[50];
    float exp;
    struct address{
        int streetno;
        char city[50];
        char district[50];
        char state[50]; 
    }s1;
};
typedef struct employee employee;
int main()
{
    employee* emplist;
    int count=0;
    emplist=(employee*)calloc(count+1,sizeof(employee));
    label1:
    while (1)
    {
        int ans = 0;
        printf("1.Add Employee\n2.Show mail\n3.Exit\n");
        scanf("%d", &ans);
        getchar();
        switch (ans)
        {
        case 1:
            char namenew[50];
            int agenew;
            char degreenew[50];
            float expnew;
            int streetnonew;
            char citynew[50];
            char districtnew[50];
            char statenew[50];
            printf("Enter name:\n");
            gets(namenew);
            printf("Enter age:\n");
            scanf("%d", &agenew);
            getchar();
            printf("Enter degree:\n");
            gets(degreenew);
            printf("Enter exp:\n");
            scanf("%f", &expnew);
            getchar();
            printf("Enter streetno:\n");
            scanf("%d", &streetnonew);
            getchar();
            printf("Enter city:\n");
            gets(citynew);
            printf("Enter district:\n");
            gets(districtnew);
            printf("Enter state:\n");
            gets(statenew);
            strcpy(emplist[count].name,namenew);
            strcpy(emplist[count].degree,degreenew);
            strcpy(emplist[count].s1.city,citynew);
            strcpy(emplist[count].s1.district,districtnew);
            strcpy(emplist[count].s1.state,statenew);
            emplist[count].age=agenew;
            emplist[count].exp=expnew;
            emplist[count].s1.streetno=streetnonew;
            count++;
            emplist=(employee*)realloc(emplist,(count+1)*sizeof(employee));
            printf("\n\n");
            break;
        case 2:
            if (count==0){
                printf("Array is empty!\n");
                printf("\n");
                goto label1;
            }else{
            for(int i=0;i < count; i++){
                printf("\nEmployee no. %d\n",i+1);
                printf("Name is %s\n",emplist[i].name);
                printf("Age is %d\n",emplist[i].age);
                printf("Degree is %s\n",emplist[i].degree);
                printf("Exp is %.2f\n",emplist[i].exp);
                printf("Street no. is %d\n",emplist[i].s1.streetno);
                printf("City is %s\n",emplist[i].s1.city);
                printf("District is %s\n",emplist[i].s1.district);
                printf("State is %s\n",emplist[i].s1.state);
                }
            }
            printf("\n\n");
            break;
        case 3:
            printf("Exiting");
            goto end;
            break;
        default:
            printf("Please Enter Valid Value!\n");
            break;
        }
    }    
    end:
    return 0;
}