/**
* @Author: Elmer Rodriguez <elmerxavierrodriguez>
* @Date:   03-08-2017 <10:06:01 PM>
* @Email:  elmer.rodriguez6@gmail.com
* @Filename: read.c
* @Last modified by:   elmerxavierrodriguez
* @Last modified time: 03-08-2017 <10:40:06 PM>
* @Copyright: © 2017 ELMER RODRIGUEZ ALL RIGHTS RESERVED
*/

/**
 * Description: C program that reads a file with a ".txt" extension and return the number of characters in that file
 */

#include < stdio.h > /* stdio.h header defines three variable types, several macros, and various functions for performing input and output. */
#include < stdlib.h >/* stdlib.h header defines four variable types, several macros, and various functions for performing general functions. */
int main()
{
 FILE *filename; /* filename is an object of the type FILE*/
 int ncharacters; filename = fopen(" read.txt"," r"); /*  declaring integer "ncharacters" opening the file "read.txt" */
  if( filename == NULL) /* checks whether the file can be opened or not*/
  {
   puts("ERROR: Unable to open file");
    exit( 1); /* indicate unsuccesful termination */
    }
     while((ncharacters = fgetc(filename))! = EOF) putchar(ncharacters);
      fclose(filename);
      return( 0);
       }

/**
 * References
 *
 * Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 4960-4978). Wiley. Kindle Edition.
 * Tutorialspoint.com. "C File I/O." Www.tutorialspoint.com. N.p., n.d. Web. 08 Mar. 2017. <https://www.tutorialspoint.com/cprogramming/c_file_io.htm>.
 * Tutorialspoint.com. "C Library." Www.tutorialspoint.com. N.p., n.d. Web. 08 Mar. 2017. <https://www.tutorialspoint.com/c_standard_library/stdio_h.htm>.
 * Tutorialspoint.com. "C Library." Www.tutorialspoint.com. N.p., n.d. Web. 08 Mar. 2017. <https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm>.
 *
 */
