#include<stdio.h>
int intsum(int x,int y){
    int sum;
    sum=x+y;


 return sum;
}


int main()
{

    int value1,value2,sum;
    scanf("%d %d",&value1,&value2);
    sum=intsum(value1,value2);

    printf("%d",sum);

    return 0;
}
