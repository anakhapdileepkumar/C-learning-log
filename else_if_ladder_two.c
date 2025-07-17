#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a;
    char yn;
    printf("Enter your age:");
    scanf("%d",&a);
    if(a>=18)
    {
    printf("Do you have driving license?(Y/N)");
    scanf(" %c",&yn);
    }
    if(a>=18 && yn=='Y')
    {
     printf("Eligible to drive");
    }
    else if(a>=18 && yn=='N')
    {
        printf("Eligible to take driving license");
    }
    else if(a<18)
    {
        printf("Not eligible for driving license");
    }
    return 0;
}