#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int choice;
    printf("1 for Salad\n2 for Fried Rice\n3 for Pulao\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("You have selected Salad");
        break;
        case 2:
        printf("You have selected Fried Rice");
        break;
        case 3:
        printf("You have selected Pulao");
        break;
        default:
        printf("Only 3 choices are available");
    }
    return 0;
}