/*
    pointers.c
    Purpose: Show the use of Arithmetic Operations and the use of Pointers in C
    @author Elmer Rodriguez
    @version 1.0 01/13/2017

 */

// code is not compiling

#include <stdio.h>
void lar(int*, int* int*);
void main()
{
    //declaring intergers variables
    int x,y lar;

    //asking the user to enter the x and y values
    printf(“Enter the value of x and y:”);

    //scanning the input of the user
    scanf(“%d%d”, &x,&y);

    //printing the results
    printf(“&x=%u\n&y=%u\n and large=%u”, &x,&y,&lar);
    lar(&x, &y,&lar);
    printf(“Larger number is %d”, lar);
}

//this functions demonstrate the use of pointers
void lar(int *a, int *b ,int*c)
{
    printf(“a=%u\nb=%u\nc=%u\n”,a,b,c);
    if(*a>*b)
        *c=*a;
    else
        *c=*b;
}

/*
Sample OUTPUT:

Enter the value of x and y: 10, 50
&x = 65524
&y=65522
&lar=65520
a=65524
b=65522
c=65520
Larger number is 50

*/

// Source: http://www.codewithc.com/understanding-c-pointers-beginners-guide