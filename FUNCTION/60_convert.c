#include<stdio.h>
double value(double value){

if(value<0){
    return value*(-1);
}
else{

    return value *(1);
}


}
int main()
{
    double num;
    scanf("%lf",&num);
    num=value(num);
    printf("%.2lf",num);



    return 0;
}
