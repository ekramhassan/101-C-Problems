#include<stdio.h>
void divisor(int x){

int i;
for(i=1;i<=x;i++){

    if(x%i==0)
    {
        printf("%d\n",i);
    }
}

}
int main()
{
    printf("The number of divisor\n");
 divisor(44);

    return 0;
}
