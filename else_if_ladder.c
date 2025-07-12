#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float num1,num2,choice,result;
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);
    printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\nEnter your choice");
    scanf("%f",&choice);
    if(choice==1)
    {
        result=num1+num2;
        printf("Result=%f",result);
    }
    else if(choice==2)
    {
        result=num1-num2;
        printf("Result=%f",result);
    }
    else if(choice==3)
    {
        result=num1*num2;
        printf("Result=%f",result);
    }
    else if(choice==4)
    {
        result=num1/num2;
        printf("Result=%f",result);
    }
    else{
        printf("Only 4 choices are available!!!");
    }
    return 0;
}