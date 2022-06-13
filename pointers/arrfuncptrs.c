/* Array of function pointers */
#include<stdio.h>
#include<stdlib.h>

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

int main(int argc, char *argv[])
{
    int iRetValue = 0;

    int (*apfAritm [3])(int, int) = {Add, Sub, Mult};

    iRetValue = (*apfAritm [0])(20, 10);

    printf("\n\nAddition: %d\n\n", iRetValue);

    iRetValue = (*apfAritm [1])(20, 10);
    
    printf("\n\nSubtract: %d\n\n", iRetValue);

    iRetValue = (*apfAritm [3])(20, 10);

    printf("\n\nMultiply: %d\n\n", iRetValue);

    return 0;
}
