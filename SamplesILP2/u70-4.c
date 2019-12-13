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
    ILP_Object ilptmp2472;
    {
      ILP_Object ilptmp2473;
      {
	ILP_Object ilptmp2474;
	ILP_Object ilptmp2475;
	ilptmp2474 = ILP_Integer2ILP (1);
	ilptmp2475 = ILP_Integer2ILP (1);
	ilptmp2473 = ILP_Equal (ilptmp2474, ilptmp2475);
      }
      if (ILP_isEquivalentToTrue (ilptmp2473))
	{
	  ilptmp2472 = ILP_TRUE;

	}
      else
	{
	  ilptmp2472 = ILP_FALSE;

	}
    }
    if (ILP_isEquivalentToTrue (ilptmp2472))
      {
	return ILP_Integer2ILP (3);

      }
    else
      {
	return ILP_Integer2ILP (4);

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
