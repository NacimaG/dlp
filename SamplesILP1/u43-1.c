#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */

/* Global functions */


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2788;
    {
      ILP_Object ilptmp2789;
      ILP_Object ilptmp2790;
      ilptmp2789 = ILP_Integer2ILP (4);
      ilptmp2790 = ILP_Integer2ILP (5);
      ilptmp2788 = ILP_LessThan (ilptmp2789, ilptmp2790);
    }
    return ILP_print (ilptmp2788);
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
