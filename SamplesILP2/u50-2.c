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
    ILP_Object ilptmp2187;
    ilptmp2187 = ILP_Integer2ILP (50);

    {
      ILP_Object x1 = ilptmp2187;
      {
	ILP_Object ilptmp2188;
	{
	  ILP_Object ilptmp2189;
	  ilptmp2189 = ILP_Integer2ILP (500);
	  ilptmp2188 = (x1 = ilptmp2189);
	}
	ilptmp2188 = x1;
	return ilptmp2188;
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
