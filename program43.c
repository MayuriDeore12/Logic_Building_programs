//Input 12 4  true
//      12 8 false

//      12 6   true
#include<stdio.h>


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);


    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is completely divisible\n");
    }
    else 
    {
         printf("It is not divisible\n");

    }





    
    

    return 0;
}