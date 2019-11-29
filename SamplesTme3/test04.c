#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object makeVector;
ILP_Object vectorLength;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp8;
    {
      ILP_Object ilptmp9;
      ILP_Object ilptmp10;
      ilptmp9 = ILP_Integer2ILP (3);
      ilptmp10 = ILP_Integer2ILP (4);
      ilptmp8 = ILP_makeVector (ilptmp9, ilptmp10);
    }
    return ILP_vectorLength (ilptmp8);
  }

}

static ILP_Object
ilp_caught_program ()
{
  struct ILP_catcher *current_catcher = ILP_current_catcher;
  struct ILP_catcher new_catcher;

  if (0 == setjmp (new_catcher._jmp_buf))
    {
      ILP_establish_catcher (&new_catcher);
      return ilp_program ();
    };
  return ILP_current_exception;
}

int
main (int argc, char *argv[])
{
  ILP_START_GC;
  ILP_print (ilp_caught_program ());
  ILP_newline ();
  return EXIT_SUCCESS;
}
