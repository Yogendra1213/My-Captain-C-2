
#include <stdio.h>
int lcm(int x, int y);
int mul=1;
void main()
{
    int a,b;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    
    int ans = lcm(a,b);
    printf("Lcm of the Teo Numbers is%d",ans);
    
}

int lcm(int x, int y)
{
    if ((mul%x==0)&&(mul%y==0))
    {
        return mul;
    }
    else
    {
        mul++;
        lcm(x,y);
    }
}

