/**
* @Author: Elmer Rodriguez <elmerxavierrodriguez>
* @Date:   02-27-2017 <09:22:07 PM>
* @Email:  elmer.rodriguez6@gmail.com
* @Filename: basic_calculator.c
* @Last modified by:   elmerxavierrodriguez
* @Last modified time: 03-01-2017 <10:21:54 PM>
* @Copyright: © 2017 ELMER RODRIGUEZ ALL RIGHTS RESERVED
*/

/**
 * Description :
 */
#include <stdlib.h> /* C library used to exit the program is someone try to make a division by 0 */
#include <stdio.h>  /* C library stdio.h header defines three variable types, several macros, and various functions for performing input output and output*/
#include "parser_scanner.h"     /* header file is a file containing C declarations and macro definitions from the parser_scanner.c file */
#include "recursive_parser.h"   /* header file is a file containing C declarations and macro definitions from the recrusive_parser.c file */

static int basic_calc(expression)
Tree *expression;
{
  int denominator;/* need to change*/
  switch(TreeOperator(expression)){

    case SymbolNumber : return (TreeValue(expression));

    case PLUS: return (basic_calc(TreeLeft(expression))+ basic_calc(TreeRight(expression)));

    case MINUS: return (basic_calc(TreeLeft(expression)) - basic_calc(TreeRight(expression)));

    case TIMES: return (basic_calc(TreeLeft(expression)) * basic_calc(TreeRight(expression)));

    case DIVIDE: return (basic_calc(TreeLeft(expression)) / basic_calc(TreeRight(expression)));

      denominator = basic_calc(TreeLeft(expression));
      /* checks for any division by zero */
      if(denominator == 0){

      printf("ERROR: Cannot Divide by 0 \n");
      exit(1);

    }
  return(basic_calc(TreeLeft(expression))/denominator);
  }
}

int main(){
  printf("Type an arithmetc expression:");
  printf("\t%d\n", basic_calc(parse_expression()));
  return 0;
}


/**
 * References
 * "Any Fundamental Difference between Source and Header Files in C?" Stack Overflow. N.p., n.d. Web. 28 Feb. 2017.
 * Belmonte, Matthew. "Parser.c." Mattababy.org. N.p., 1998. Web. 01 Mar. 2017. <http://www.mattababy.org/~belmonte/Teaching/CCC/Project/parser.c>.
 * "C Linking Error: Undefined Reference to 'main'." Linker - C Linking Error: Undefined Reference to 'main' - Stack Overflow. Stack Overflow, n.d. Web. 01 Mar. 2017. <http://stackoverflow.com/questions/15905119/c-linking-error-undefined-reference-to-main>.
 * "C Program for Recursive Descent Parser." Get Program Code. Http://programcodelib.com, 21 Oct. 2013. Web. 01 Mar. 2017. <http://programcodelib.com/2013/03/c-program-for-recursive-descent-parser/>.
 * "Header Files - The C Preprocessor." Header Files - The C Preprocessor. N.p., n.d. Web. 28 Feb. 2017.
 * Nelson, Randal. "Parsing." Parsing. University of Rochester, 1999. Web. 01 Mar. 2017. <https://www.cs.rochester.edu/~nelson/courses/csc_173/grammars/parsing.html>.
 * "Recursive Descent Parsing." Recursive Descent Parsing. Http://www.codecodex.com/, 24 Mar. 2011. Web. 01 Mar. 2017. <http://www.codecodex.com/wiki/Recursive_descent_parsing>.
 * Tutorialspoint.com. "C Library." Www.tutorialspoint.com. N.p., n.d. Web. 28 Feb. 2017.
 */
