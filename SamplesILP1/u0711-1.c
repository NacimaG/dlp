#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2581;
    ILP_Object ilptmp2582;
    ilptmp2581 = ILP_Integer2ILP (711);
    {
      ILP_Object ilptmp2583;
      ILP_Object ilptmp2584;
      ilptmp2583 = ILP_FALSE;
      ilptmp2584 = ILP_Integer2ILP (2);
      ilptmp2582 = ILP_Or (ilptmp2583, ilptmp2584);
    }
    return ILP_Or (ilptmp2581, ilptmp2582);
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
