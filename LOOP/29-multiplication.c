#include <stdio.h>

int main() {
    int n,i;
    printf("Enter your input number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,i*n);


    }

    return 0;
}
