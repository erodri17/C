/*
    fibonacci.c
    Purpose: C program for Finbonacci series without using a function
    @author Elmer Rodriguez
    @version 1.0 01/13/2017

 */

#include <stdio.h>

int main()
{
    //declaring integer variables and initializing the variables "a","b" and "show"
    int i, n, a=0, b=1,show=0;

    printf("\nEnter the number of terms required in Fibonacci Series: ");
    scanf(%d, &n);
    printf("The Fibonacci Series is:\n\n\n %d+%d+", a, b);

    /* showing the first two terms of the Fibonacci Series */
    i=2;

    /* i=2, since the first two terms of the series have been already shown */

    /* fibonacci series */
    while(i<n)
    {
        show= a+b;
        a=b;
        b=show;
        ++i;
        printf("%d+", show);
    }
    /* @return terminate fibonacci.c after program has been executed */
    return 0;
}

//Source: http://www.codewithc.com/c-program-for-fibonacci-series/
