/*
    recursivefibonacci.c
    Purpose: Program for Fibonacci Series using a recursive function
    @author Elmer Rodriguez
    @version 1.0 01/13/2017

 */

//importing functions stdio.h and conio.h from the C language library
#include<stdio.h>
#include<conio.h>

/*
    function definition of the fibonacci series
    @param iterates from 1 to n
*/
int fibonacci(int x)
{
    int fib;//stores the value of fibonacci series (after being added)

    //if the integer x equals one, return zero
    if(x == 1)
        return(0);

    //else if teh integer x equals two, return one
    else if(x==2)
        return(1);

    //otherwise, do the finabonacci series using recursion
    fib = fibonacci(x-1)+fibonacci(x-2); //notice that the variable fib calls the function fibonacci

    //return the value stored in the variable fib
    return(fib);
}

void main()
{
    int fibonacci(int);
    int x;//used to iterate
    int y;//used to store the value of the final result
    int n;//used to store the value of the user

    //asking the user to enter an input
    printf("Enter the number of terms required in Fiboancci Series: ");

    //storing the input provided by the user
    scanf("%d", &n);

    //printing the Fibonacci Series
    printf("\nThe Fibonacci Series is:\n\n\n");

    //iterating from the first element until the "n" element as requested by the user
    for(x=1; x<=n; x++)
    {
        y = fibonacci(x);//calling the function fibonacci with an argument
        printf("%5d",y);// printing the results
    }
    //getch() is used to read a character from screen
    getch();//non-standard functions defined in conio.h
}

//Source:http://www.codewithc.com/c-program-for-fibonacci-series/
