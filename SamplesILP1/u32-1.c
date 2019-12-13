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
    ILP_Object ilptmp2753;
    ilptmp2753 = ILP_Float2ILP (2.2);

    {
      ILP_Object f11 = ilptmp2753;
      {
	ILP_Object ilptmp2754;
	ilptmp2754 = ILP_Float2ILP (6.3);

	{
	  ILP_Object f22 = ilptmp2754;
	  {
	    ILP_Object ilptmp2755;
	    ILP_Object ilptmp2756;
	    ilptmp2755 = f11;
	    ilptmp2756 = f22;
	    return ILP_Plus (ilptmp2755, ilptmp2756);
	  }

	}
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
