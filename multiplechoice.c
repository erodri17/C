/**
* @Author: Elmer Rodriguez <elmerxavierrodriguez>
* @Date:   03-08-2017 <10:02:32 PM>
* @Email:  elmer.rodriguez6@gmail.com
* @Filename: multiplechoice.c
* @Last modified by:   elmerxavierrodriguez
* @Last modified time: 03-08-2017 <10:02:36 PM>
* @Copyright: © 2017 ELMER RODRIGUEZ ALL RIGHTS RESERVED
*/


/**
 * Description: Multiple choice selection C program
 */

#include <stdio.h> /* stdio.h header defines three variable types, several macros, and various functions for performing input and output. */

int main()
{
int code;
 printf(" Enter the error code (1-3): ");
 scanf("% d",& code); switch( code)
 {
    case 1: puts(" Drive Fault, not your fault.");
    break;
    case 2: puts(" Illegal format, call a lawyer.");
    break; case 3:
    puts(" Bad filename, spank it.");
    break;
    default: puts(" That's not 1, 2, or 3");
    }
    return( 0);
 }

 /**
  * References
  *
  * Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 4960-4978). Wiley. Kindle Edition.
  * Tutorialspoint.com. "C Library." Www.tutorialspoint.com. N.p., n.d. Web. 08 Mar. 2017. <https://www.tutorialspoint.com/c_standard_library/stdio_h.htm>.
  *
  */
