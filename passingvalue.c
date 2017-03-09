/**
* @Author: Elmer Rodriguez <elmerxavierrodriguez>
* @Date:   03-08-2017 <11:14:44 PM>
* @Email:  elmer.rodriguez6@gmail.com
* @Filename: passingvalue.c
* @Last modified by:   elmerxavierrodriguez
* @Last modified time: 03-08-2017 <11:48:09 PM>
* @Copyright: © 2017 ELMER RODRIGUEZ ALL RIGHTS RESERVED
*/

/**
 * Description: Passing a value to a function in C (example), and then printing the final value using "*"
 */

/*Passing a Value to a Function Example*/

#include <stdio.h>

 void funct(int temp); /* declaring the function "funct" so it can be used in the main function */

int main()
{
  int value; /* declaring the integer value "value" */
  value = 2; /* initializing value and setting it equal to 2*/
    while(value <= 256) /* while the value is less than a 100 */
    {
      funct(value); /* use the function "funct" and use the current value of the variable "value" as the parameter for that function */
        printf("The values are: \n"); /* print the result */
        printf("%d\n",value);
          value = value * 2; /* the value of the "value" variable is going to print the powers of 2 until it reaches 256  or 2^(8)*/
        }
        return(0); /* succesful termination */
}

/* funct is the function that is going to be receiving the value*/
void funct(int temp)
{
  int i; /* declaring integer i */
    for( i = 0; i < temp; i = i + 1) putchar('*');
      putchar('\n');
}

/*Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 3979-3988). Wiley. Kindle Edition. */
