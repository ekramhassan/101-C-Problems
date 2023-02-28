#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the three Number:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a<c)
    {
        printf("Max: %d\n",a);
    }
    else if(b>c)
    {
        printf("Max:%d\n",b);
    }
    else {


        prinf("Max: %d\n",c);
    }


    return 0;
}
