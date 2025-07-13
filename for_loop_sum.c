#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,num,sum=0;
    printf("Enter a value:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Result is %d",sum);
    return 0;
}