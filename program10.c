#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct mailadd{
    char name[50];
    char street[50];
    char city[50];
    char state[50];
    int zip;
};
typedef struct mailadd mailadd;
int main()
{
    mailadd* addresslist;
    int count=0;
    int empty=0;
    addresslist=(mailadd*)calloc(count+1,sizeof(mailadd));
    label1:
    while (1)
    {
        int ans = 0;
        printf("1.Add mail\n2.Delete mail\n3.Show mail\n4.Exit\n");
        scanf("%d", &ans);
        getchar();
        printf("\n");
        switch (ans)
        {
        case 1:
            char namenew[20];
            char streetnew[20];
            char citynew[20];
            char statenew[20];
            int zipnew;
            printf("Enter name:\n");
            gets(namenew);
            printf("Enter street:\n");
            gets(streetnew);
            printf("Enter city:\n");
            gets(citynew);
            printf("Enter state:\n");
            gets(statenew);
            printf("Enter zip:\n");
            scanf("%d", &zipnew);
            strcpy(addresslist[count].name,namenew);
            strcpy(addresslist[count].street,streetnew);
            strcpy(addresslist[count].city,citynew);
            strcpy(addresslist[count].state,statenew);
            addresslist[count].zip = zipnew;
            count++;
            empty++;
            addresslist=(mailadd*)realloc(addresslist,(count+1)*sizeof(mailadd));
            printf("\n\n");
            break;
        case 2:
            if (empty==0){
                printf("Array is empty!\n");
                printf("\n");
                goto label1;
            }else{
            for (int i = 0; i < count; i++)
            {
                if(addresslist[i].zip!=0){
                printf("%d.%s\n", i + 1, addresslist[i].name);
                }
            }
            printf("\nEnter number to delete mail address:\n");
            int ans;
            scanf("%d", &ans);
            printf("Deleted!\n");

            strcpy(addresslist[ans-1].city,"");
            strcpy(addresslist[ans-1].state,"");
            strcpy(addresslist[ans-1].street,"");
            strcpy(addresslist[ans-1].name,"");
            addresslist[ans-1].zip=0;
            empty--;
            }
            printf("\n\n");       
            break;
        case 3:
            if (empty==0){
                printf("Array is empty!\n");
                printf("\n");
                goto label1;
            }else{
            for(int i=0;i < count; i++){
                if (addresslist[i].zip!=0){
                printf("\nAddresslist no. %d\n",i+1);
                printf("Name is %s\n",addresslist[i].name);
                printf("Street is %s\n",addresslist[i].street);
                printf("City is %s\n",addresslist[i].city);
                printf("State is %s\n",addresslist[i].state);
                printf("Zipcode is %d\n",addresslist[i].zip);
                }else{
                    printf("\n");
                    printf("Record %d has been deleted!\n",i+1);
                    printf("\n");
                }
                }
            }
            printf("\n\n");
            break;
        case 4:
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