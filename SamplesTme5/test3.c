#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp10;
    ilptmp10 = ILP_Integer2ILP (0);

    {
      ILP_Object x1 = ilptmp10;
      {
	ILP_Object ilptmp11;
	while (1)
	  {
	    ILP_Object ilptmp12;
	    {
	      ILP_Object ilptmp13;
	      ILP_Object ilptmp14;
	      ilptmp13 = x1;
	      ilptmp14 = ILP_Integer2ILP (5);
	      ilptmp12 = ILP_LessThan (ilptmp13, ilptmp14);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp12))
	      {
		{
		  ILP_Object ilptmp15;
		  {
		    ILP_Object ilptmp16;
		    {
		      ILP_Object ilptmp17;
		      ILP_Object ilptmp18;
		      ilptmp17 = x1;
		      ilptmp18 = ILP_Integer2ILP (1);
		      ilptmp16 = ILP_Plus (ilptmp17, ilptmp18);
		    }
		    ilptmp15 = (x1 = ilptmp16);
		  }
		  continue;
		  {
		    ILP_Object ilptmp19;
		    {
		      ILP_Object ilptmp20;
		      ILP_Object ilptmp21;
		      ilptmp20 = x1;
		      ilptmp21 = ILP_Integer2ILP (1);
		      ilptmp19 = ILP_Plus (ilptmp20, ilptmp21);
		    }
		    ilptmp15 = (x1 = ilptmp19);
		  }
		  (void) ilptmp15;
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp11 = ILP_FALSE;
	ilptmp11 = x1;
	return ilptmp11;
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
