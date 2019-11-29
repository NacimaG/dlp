#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object makeVector;
ILP_Object vectorGet;

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp4;
    ILP_Object ilptmp5;
    {
      ILP_Object ilptmp6;
      ILP_Object ilptmp7;
      ilptmp6 = ILP_Integer2ILP (12);
      ilptmp7 = ILP_String2ILP ("tata");
      ilptmp4 = ILP_makeVector (ilptmp6, ilptmp7);
    }
    ilptmp5 = ILP_Integer2ILP (2);
    return ILP_vectorGet (ilptmp4, ilptmp5);
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
