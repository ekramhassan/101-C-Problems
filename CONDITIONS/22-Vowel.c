#include<stdio.h>
int main ()
{
    char letter;
    printf("Enter your lettr:");
   scanf("%c",&letter);
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o'|| letter=='u')
    {
        printf("vowel\n");
    }
    else{

        printf("constent\n");
    }

    return 0;
}
