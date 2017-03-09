/**
* @Author: Elmer Rodriguez <elmerxavierrodriguez>
* @Date:   03-08-2017 <09:57:42 PM>
* @Email:  elmer.rodriguez6@gmail.com
* @Filename: input.c
* @Last modified by:   elmerxavierrodriguez
* @Last modified time: 03-08-2017 <11:13:30 PM>
* @Copyright: © 2017 ELMER RODRIGUEZ ALL RIGHTS RESERVED
*/

/**
 * Description: C program that counts the numbers of input characters provided
 */


#include <stdio.h> /* stdio.h header defines three variable types, several macros, and various functions for performing input and output. */
main()
{
int number; /* declaring integer variable "number" */
number = 0; /* initializing "number" */
while (getchar() != EOF)
++number; /* add 1 to num */
printf("The number or input characters provided is: %d\n", number); /* printing result*/
}

/**
 * References
 *
 * Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 4960-4978). Wiley. Kindle Edition.
 * Tutorialspoint.com. "C Library." Www.tutorialspoint.com. N.p., n.d. Web. 08 Mar. 2017. <https://www.tutorialspoint.com/c_standard_library/stdio_h.htm>.
 *
 */
