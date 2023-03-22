
#include <stdio.h>

int main() {
int n,i;
printf("The number:");
scanf("%d",&n);
if(n==-1)
return 0;
else if(n>-32)
{
    for(i=n;i>=-32;i--)
    printf("%d",i);
}
else
{
    for(i=n;i<=-32;i++)
    printf("%d",i);
}
printf("\n");

    return 0;
}
