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
    ILP_Object ilptmp2803;
    {
      ILP_Object ilptmp2804;
      ilptmp2804 = ILP_String2ILP ("Un, ");
      ilptmp2803 = ILP_print (ilptmp2804);
    }
    {
      ILP_Object ilptmp2805;
      ilptmp2805 = ILP_String2ILP ("deux et ");
      ilptmp2803 = ILP_print (ilptmp2805);
    }
    {
      ILP_Object ilptmp2806;
      ilptmp2806 = ILP_String2ILP ("trois.");
      ilptmp2803 = ILP_print (ilptmp2806);
    }
    return ilptmp2803;
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
