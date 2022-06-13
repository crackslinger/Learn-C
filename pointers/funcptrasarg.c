/* Function Pointer passed as argument to a function. */
#include<stdio.h>

typedef int (*pfunctPtr)(int, int);

int ArithMaticOperator(int iData1, int iData2, pfunctPtr Calculate)
{
    int iRet = 0;

    iRet = Calculate(iData1, iData2);

    return iRet;
}

int Add(int a, int b)
{
    return (a + b);
}

int Sub(int a, int b)
{
    return (a - b);
}

int Mult(int a, int b)
{
    return (a * b);
}

int main()
{
    int x = 0;
    int y = 0;
    int choice = 0;
    int result = 0;

    printf("Enter 2 nums: \n\n");
    scanf("%d%d", &x, &y);

    printf("\n1 for Addition\n\n");
    printf("2 for Subtraction\n\n");
    printf("3 for Multiplication\n\n");

    printf("Choose [1,2,3]: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = ArithMaticOperator(x, y, Add);
            break;

        case 2:
            result = ArithMaticOperator(x, y, Sub);
            break;

        case 3:
            result = ArithMaticOperator(x, y, Mult);
            break;

        default:
            printf("Entered wrong choice\n\n");
    }
    printf("\n\nResult = %d\n", result);

    return 0;

}
