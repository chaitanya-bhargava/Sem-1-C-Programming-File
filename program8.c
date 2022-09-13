#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int* queue;
    int count=1;
    queue=(int*)calloc(count,sizeof(int));
    int ans;
    int* first=queue;
    int* last=queue;
    while(1){
    printf("1.Add Element\n2.Delete Element\n3.Display Elements\n4.Exit\n");
    printf("Choose Operation:");
    scanf("%d",&ans);
    switch (ans)
    {
    case 1:
        int num;
        printf("Enter number to be added:");
        scanf("%d",&num);
        *last=num;
        last++;
        count++;
        queue=(int*)realloc(queue,count*sizeof(int));
        printf("\n");
        break;
    case 2:
        if(last==queue){
            printf("Queue is empty!\n");
        }else{
        printf("%d deleted from queue!\n",*first);
        for(int i=0;i<last-first;i++){
            *(first+i)=*(first+i+1);
        }
        count--;
        queue=(int*)realloc(queue,count*sizeof(int));
        last--;
        }
        printf("\n");
        break;
    case 3:
        if(last==queue){
            printf("Queue is empty!\n");
        }else{
        printf("The queue elements are:");
        for(int i=0;i<last-first;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
        }
        printf("\n");
        break;
    case 4:
        printf("Exiting");
        goto end;
        break;
    
    default:
        break;
    }
    }
    end:
    return 0;
}