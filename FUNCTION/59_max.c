#include<stdio.h>


double findmax(double value1,double value2,double value3){
if(value1>=value2 && value1>=value3){
    return value1;}

else if(value2>=value3){

    return value2;}

else{
    return value3;}

}
int main (){


    double num1,num2,num3,max=0;
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    max=findmax(num1,num2,num3);
    printf("Mazimum number:%.2lf",max);



return 0;
}
