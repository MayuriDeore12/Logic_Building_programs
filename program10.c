
/*
step 1: Understand the problem statement
step 2:  Write the algorithm
step 3: Decide the programmming language
step 4: Write the program
step 5: Test the program
*/


/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        If the input is negative then convert it into positive
        Perform adition of No1 & No2
        Display the addition on screen
    STOP


*/

////////////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
  //    Function Name : AdditionTwoNumbers
  //    Description :    It is used to perform Addition
  //    Input :         Float,Float
  //    Output :        Float
  //    Author :        Mayuri Prabhakar Deore
  //    Date :          09/10/2025
    
////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    
    //Updater

    if(fNo1 < 0)
    {
        fNo1 = -fNo1;
    }


    if(fNo2 < 0)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2; //Business logic

    return fSum;

}

////////////////////////////////////////////////////////////////////////////////
//
// Entry point function for the application
//

////////////////////////////////////////////////////////////////////////////////



int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second number: \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is: %f\n", fRet);

    return 0;
}



////////////////////////////////////////////////////////////////////////////////
//
// Testcases successfully handled by the application
//
//Input1 : 10.5       Input: 3.2        output: 13.7
//Input1 : -10.5      Input: 3.2        output: 13.7
//Input1 : 10.5       Input:- 3.2       output: 13.7
//Input1 : -10.5      Input: -3.2       output: 13.7
//Input1 : 10.5       Input: 0.0        output: 10.5

////////////////////////////////////////////////////////////////////////////////






////////////////////////////////////////////////////////////////////////////////
