#include<stdio.h>

float add(int num1,int num2){

float result;
result=num1+num2;
return result;
}
float subtract(int num1,int num2)
{
    float result;
    result=num1-num2;
    return result;

}
float multiply(int num1,int num2)
{

    float result;
    result=num1*num2;
    return result;

}
float divide(int num1,int num2){

float result;
result=num1/num2;
return 0;
}
int main (){
int  num1,num2;
float add_result,subtract_result,multiply_result,divide_result;
scanf("%d %d",&num1,&num2);

add_result=add(num1,num2);
subtract_result=subtract(num1,num2);
multiply_result=multiply(num1,num2);
divide_result=divide(num1,num2);

printf("add number : %.2lf\n",add_result);
printf("subtract Number : %.2lf\n",subtract_result);
printf("multiple Number : %.2lf\n",multiply_result);
printf("divide number : %.2lf\n",divide_result);


return 0;
}
