#include<stdio.h>

int test1()
{
    return 1;
}
int test2()
{
    return 2;
}
int test3()
{
    return 3;
}
int test4()
{
    return 4;
}

//fun is the type of pointer to function returning int
typedef int (*fun)();

//pArrfun is the type of pointer to array whose size is 4 and
//which contains fun which points to funct returning int
typedef fun (*pArrfun)[4];

//global array containing func ptr
fun arr[4] = {test1, test2, test3, test4};

pArrfun pf()
{
    pArrfun pfArr = &arr;
    return(pfArr);
}

int main()
{
    pArrfun test = pf;

    printf("%d\n", (*test)[0]);
    printf("%d\n", (*test)[1]);
    printf("%d\n", (*test)[2]);
    printf("%d\n", (*test)[3]);

    return 0;
}

