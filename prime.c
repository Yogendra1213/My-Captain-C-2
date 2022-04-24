
#include <stdio.h>
int prime(int x, int y);

void main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    
    int check = prime(num,2);
    if (check==0)
    {
        printf("It is a Prime Number");
    }
    else
    {
        printf("It is not a Prime Number");
    }
}

int prime(int x, int y)
{
    if (x==y)
    {
        return 0;
    }
    else
    {
        if(x%y==0)
          return 1;
          
        else
        {
            prime(x,y+1);
        }
    }
}

