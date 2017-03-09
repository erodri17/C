/**
* @Author: Elmer Rodriguez <elmerxavierrodriguez>
* @Date:   03-08-2017 <09:51:35 PM>
* @Email:  elmer.rodriguez6@gmail.com
* @Filename: bubblesort.c
* @Last modified by:   elmerxavierrodriguez
* @Last modified time: 03-08-2017 <11:24:21 PM>
* @Copyright: © 2017 ELMER RODRIGUEZ ALL RIGHTS RESERVED
*/

/**
 * Description: Bubble Sort Program that takes an array of 10 elements and
 */

#include <stdio.h>/* stdio.h header defines three variable types, several macros, and various functions for performing input and output. */
 #define SIZE 10 /* defining the size of the array to be equal to 10 */
 int main()
 {
  int arrbubble[] = { 45, 62, 7, 31, 23, 2, 100,30, 45}; /* element in the array */
  int inner, outer, temporary, x; /* defining integer variables to use while doing bubble sort */
  puts("\n\nOriginal Array:\n");
  for( x = 0; x < SIZE; x++)
    printf("% d\t", arrbubble[x]); putchar('\n'); /* Bubble sort */
    for( outer = 0; outer < SIZE-1; outer++)
    { for( inner = outer + 1; inner < SIZE; inner++)
        {
        if( arrbubble[outer] > arrbubble[ inner])
        {
        temporary = arrbubble[ outer];
        arrbubble[outer] = arrbubble[ inner];
        arrbubble[inner] = temporary;
         }
        }
     } /* Display sorted array */
     puts("\n\nSorted Array:\n");
     for( x = 0; x < SIZE; x++)
        printf("%d\t", arrbubble[x]);
         putchar('\n\n');
         return( 0);
    }

/**
 * References
 *
 * Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 4960-4978). Wiley. Kindle Edition.
 * Tutorialspoint.com. "C Library." Www.tutorialspoint.com. N.p., n.d. Web. 08 Mar. 2017. <https://www.tutorialspoint.com/c_standard_library/stdio_h.htm>.
 *
 */
