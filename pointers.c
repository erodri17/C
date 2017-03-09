


/*Code Example: C-Pointers*/
#include < stdio.h >
int main()
{
char lead;
 char *sidekick;
 lead = 'A'; /* initialize char variable */
 sidekick = &lead; /* initialize pointer IMPORTANT! */
 printf(" About variable 'lead':\ n");
  printf(" Size\ t\ t% ld\ n", sizeof( lead));
  printf(" Contents\ t% c\ n", lead);
  printf(" Location\ t% p\ n",& lead);
  printf(" And variable 'sidekick':\ n");
   printf(" Contents\ t% p\ n", sidekick);
    return( 0);
    }



    /*Output of this program*/
    /*
    About variable 'lead':
    Size 1
    Contents A
    Location 0x7fff5fbff8ff
    And variable 'sidekick':
    Contents 0x7fff5fbff8ff
    */
Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 7414-7420). Wiley. Kindle Edition.

/*Gookin, Dan (2013-10-10). Beginning Programming with C For Dummies (Kindle Locations 7403-7409). Wiley. Kindle Edition. */
