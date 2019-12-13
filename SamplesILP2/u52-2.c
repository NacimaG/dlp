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
    ILP_Object ilptmp2220;
    ilptmp2220 = ILP_Integer2ILP (50);

    {
      ILP_Object x1 = ilptmp2220;
      {
	ILP_Object ilptmp2221;
	while (1)
	  {
	    ILP_Object ilptmp2222;
	    {
	      ILP_Object ilptmp2223;
	      ILP_Object ilptmp2224;
	      ilptmp2223 = x1;
	      ilptmp2224 = ILP_Integer2ILP (52);
	      ilptmp2222 = ILP_LessThan (ilptmp2223, ilptmp2224);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp2222))
	      {
		{
		  ILP_Object ilptmp2225;
		  {
		    ILP_Object ilptmp2226;
		    ILP_Object ilptmp2227;
		    ilptmp2226 = x1;
		    ilptmp2227 = ILP_Integer2ILP (1);
		    ilptmp2225 = ILP_Plus (ilptmp2226, ilptmp2227);
		  }
		  (void) (x1 = ilptmp2225);
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp2221 = ILP_FALSE;
	ilptmp2221 = x1;
	return ilptmp2221;
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
