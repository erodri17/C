/*
    pascal.c
    Purpose: Program prints Pascal's Triangle (based on the numbers of rows requested by the user)
    @author Elmer Rodriguez
    @version 1.0 01/15/2017

 */

//importing the function "stdio.h" from the C language library
#include <stdio.h>

/*
    @param takes an integer "y" which is the parameter given by the user
    @return a long value "result" which reprensent the complete iteration of the program from 1 until the parameter row provided by the user
*/
long fun(int y)
{
    int i;// declaring integer "z";
    long result = 1; // initiating the long variable "result" and set it up to be equivalent to one

    //for loop that iteration from the first row until the row number provided by the user
    for(i=1; i<=y; i++)
        result = result*i;
    //returning the result of the iteration, the result is a long value
    return(result);
}

//main function that returns an interger value
int main()
{
    int x; //declaring the integer value "x"
    int y; //declaring the integer value "y"
    int z; //declaring the integer value "z"

    //asking user for an input (numbers of rows to be printed of the Pascal's triangle)
    printf("Input the number of rows in Pascal's triangle: ");

    //storing the value provided by the user in the integer variable "y", using pointers
    scanf("%d", &y);

    //Looping through rows and printing out Pascal's triangle
    for(x=0; x<y; x++)
    {
        for(z=0; z<=(y-x-2);z++)
        printf(" ");
        for(z=0; z<=x;z++)
            printf("%ld ", fun(x)/(fun(z)*fun(x-z)));
        printf("\n");
    }

    //Terminating the program
    return 0;
}


//Source: http://www.codewithc.com/c-program-for-pascals-triangle/
