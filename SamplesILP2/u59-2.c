#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object g;

/* Global prototypes */

/* Global functions */


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2351;
    ilptmp2351 = ILP_Integer2ILP (1);

    {
      ILP_Object x1 = ilptmp2351;
      {
	ILP_Object ilptmp2352;
	{
	  ILP_Object ilptmp2353;
	  ilptmp2353 = ILP_Integer2ILP (59);
	  ilptmp2352 = (g = ilptmp2353);
	}
	ilptmp2352 = g;
	return ilptmp2352;
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
