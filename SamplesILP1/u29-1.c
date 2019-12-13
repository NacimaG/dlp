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
    ILP_Object ilptmp2707;
    ilptmp2707 = ILP_Integer2ILP (3);

    {
      ILP_Object x1 = ilptmp2707;
      {
	ILP_Object ilptmp2708;
	{
	  ILP_Object ilptmp2709;
	  ILP_Object ilptmp2710;
	  ilptmp2709 = x1;
	  ilptmp2710 = x1;
	  ilptmp2708 = ILP_Plus (ilptmp2709, ilptmp2710);
	}

	{
	  ILP_Object x2 = ilptmp2708;
	  {
	    ILP_Object ilptmp2711;
	    ILP_Object ilptmp2712;
	    ilptmp2711 = x2;
	    ilptmp2712 = x2;
	    return ILP_Times (ilptmp2711, ilptmp2712);
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
