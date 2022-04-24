
#include <stdio.h>
int sum(int x);

void main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    
    int total=sum(num);
    printf("The of the digits is:%d",total);
}

int sum(int x)
{
    int dig;
    dig=x%10;
    if (x==0)
    {
        return 0;
    }
    else
    {
        return (dig+sum(x/10));
    }
}
