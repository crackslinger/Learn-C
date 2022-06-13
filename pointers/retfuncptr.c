/* Function returning function pointer. */
#include<stdio.h>

typedef int(*pfunctPtr)(int, int);

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

pfunctPtr ArithmOp(int choice)
{
    pfunctPtr pAritFunct = NULL;

    switch(choice)
    {
        case 1:
            pAritFunct = Add;
            break;

        case 2:
            pAritFunct = Sub;
            break;

        case 3:
            pAritFunct = Mult;
            break;
    }

    return pAritFunct;
}

int main()
{
    int a = 0;
    int b = 0;
    int choice = 0;
    int result = 0;
    pfunctPtr pAritFunct = NULL;

    printf("Enter 2 nums:\n\n");
    scanf("%d%d", &a, &b);

    printf("\n1 for Addition\n\n");
    printf("2 for Subtraction\n\n");
    printf("3 for Multiplication\n\n");

    scanf("%d", &choice);
    
    pAritFunct = ArithmOp(choice);

    if(pAritFunct != NULL)
    {
        result = (*pAritFunct)(a, b);
        printf("\nResult %d\n\n", result);
    }
    else
    {
        printf("Please enter valid choice.\n");
    }

    return 0;
}
