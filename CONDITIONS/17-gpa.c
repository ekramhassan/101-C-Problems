#include<stdio.h>
int main ()
{
    double mark;
    printf("Enter the mark:");
    scanf("%lf",&mark);
    if(mark>=80 && mark<=100){

        printf("A+\n");
    }
    else if(mark>=70 && mark<80)
    {
        printf("A\n");
    }
    else if(mark>=60 && mark<70)
    {
        printf("A-\n");
    }
    else if(mark>=50 && mark<60)
    {
        printf("B\n");
    }
    else if(mark>=40 && mark<49)
    {
        printf("C\n");
    }
    else if(mark>=33 && mark<40)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}
