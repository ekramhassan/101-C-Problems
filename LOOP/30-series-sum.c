#include <stdio.h>

int main() {


    int i,sum=0;
    for(i=101;i>=1;i=i-2){

        sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}
