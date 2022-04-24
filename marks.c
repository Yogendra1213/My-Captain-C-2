
#include <stdio.h>

void main()
{
    int marks;
    printf("Enter the Marks of the Student");
    scanf("%d",&marks);
    
    if ((85<=marks)&&(marks<=100))
    {
        printf("You have Scored Grade A");
    }
    else if ((70<=marks)&&(marks<=84))
    {
        printf("You have Scored grade B");
    }
    else if ((55<=marks)&&(marks<=69))
    {
        printf("You have Scored Grade C");
    }
    else if ((40<=marks)&&(marks<=54))
    {
        printf("You have Scored Grade D");
    }
    else if (marks<40)
    {
        printf("You have Scored Grade F");
    }
    else 
    {
        printf("Please!! Enter the Correct marks");
    }

}
