/*
    fahr.c
    Purpose: This program prints a Fahrenheit-Celsius table for fahr = 0,20, 40 .. , 300
    @author Elmer Rodriguez
    @version 1.0 01/13/2017

 */

//This program uses the formula C = (5/9)(F-32) to print the following table of Fahrenheit temperatures and their centigrade or Celsius equivalents

//importing the stdio.h function from the C language library
#include<stdio.h>

main()
{
    int fahr, celsius; //declaring the variables representing the temperature units
    int lower, upper, step;// declaring the variables that reprensent the upper level, lower level and step (range between temperatures)

    //initializing the values (providing them values)
    lower = 0; //lower limit of temperature table
    upper = 300; //upper limit
    step = 20; //step size

    fahr = lower;//setting the temperature in Fahrenheit to the lower limit (which is zero in the case)

    while (fahr <= upper)//while the temperature in fahrenheit is less than the upper limit, keep printing the table
    {
        celsius = 5*(fahr-32)/9; // Fahranheit to Celcius formula is stored in the "celsius" variable
        printf("%d\t%d\n", fahr, celsius);//Printing the result (in table form)
        fahr = fahr+step;//adding the step (range between elements) to the fahrenheit temperature
    }

}