/*Example: A Simple Tic-Tac-Toe Game in C Using a Two Dimensional Matrix*/
#include < stdio.h >
 int main()
 {
  char tictactoe[ 3][ 3];
   int x, y; /* initialize matrix */
   for( x = 0; x < 3; x + +)
    for( y = 0; y < 3; y + +)
        tictactoe[ x][ y] ='.';
        tictactoe[ 1][ 1] = 'X'; /* display game board */
             puts(" Ready to play Tic-Tac-Toe?");
             for( x = 0; x < 3; x + +)
             {
             for( y = 0; y < 3; y + +)
             printf("% c\ t", tictactoe[ x][ y]);
              putchar('\ n');
               }
              return( 0);
              }

/*Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 5041-5042). Wiley. Kindle Edition. */
