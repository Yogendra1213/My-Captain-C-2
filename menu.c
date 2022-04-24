
#include <stdio.h>

void main()
{
    int choice;
    printf("Enter a Number:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("Pizza \nPrice = 149");
        break;
        
        case 2:
        printf("\nBurger \nPrice = 79");
        break;
        
        case 3:
        printf("\nGarlic Bread \nPrice = 199");
        break;
        
        case 4:
        printf("\nPastaa \nPrice = 129");
        break;
        
        case 5:
        printf("\nNoodles \nPrice = 99");
        break;
        
        default:
        printf("\n Enter a Correct Choice");
        break;
    }
}
