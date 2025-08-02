#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int values[100],i,limit,sum=0;
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter values");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+values[i];
    }
    printf("Sum = %d",sum);
return 0;
}