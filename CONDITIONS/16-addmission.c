#include<stdio.h>
int main ()
{
    double gpa;
    printf("Enter the gpa:");
    scanf("%lf",&gpa);
    if(gpa<5.00)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}
