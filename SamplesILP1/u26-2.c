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
    ILP_Object ilptmp2669;
    ILP_Object ilptmp2670;
    ilptmp2669 = ILP_Integer2ILP (1);
    ilptmp2670 = ILP_Integer2ILP (2);

    {
      ILP_Object x1 = ilptmp2669;
      ILP_Object y2 = ilptmp2670;
      {
	ILP_Object ilptmp2671;
	ILP_Object ilptmp2672;
	ilptmp2671 = x1;
	ilptmp2672 = y2;
	return ILP_Plus (ilptmp2671, ilptmp2672);
      }

    }
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
