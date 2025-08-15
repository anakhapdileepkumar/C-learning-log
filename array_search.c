#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int limit,i,values[100],SearchKey,flag=0;
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter values");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Please enter Search Key");
    scanf("%d",&SearchKey);
    for(i=0;i<limit;i++)
    {
        if(SearchKey==values[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Value found at position %d",i+1);
    }
    else
    {
    printf("Value not found");
    }
}