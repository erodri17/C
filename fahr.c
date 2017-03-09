#include <stdio.h>

/*print Fahrenheit - Celsius Table for F = -, 20.. 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /*upper limit*/
    upper = 300; /*lower limit*/
    step = 20;/*step size*/

fahr = lower;
while(fahr <= upper){
celsius = 5*(fahr-32)/9;
printf("%d\t%d\n", fahr, celsius);
fahr = fahr+step;
}
}