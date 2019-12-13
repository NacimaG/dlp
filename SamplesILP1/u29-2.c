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
    ILP_Object ilptmp2723;
    ILP_Object ilptmp2724;
    ilptmp2723 = ILP_Integer2ILP (11);
    ilptmp2724 = ILP_Integer2ILP (22);

    {
      ILP_Object x1 = ilptmp2723;
      ILP_Object y2 = ilptmp2724;
      {
	ILP_Object ilptmp2725;
	ILP_Object ilptmp2726;
	{
	  ILP_Object ilptmp2727;
	  ILP_Object ilptmp2728;
	  ilptmp2727 = x1;
	  ilptmp2728 = y2;
	  ilptmp2725 = ILP_Plus (ilptmp2727, ilptmp2728);
	}
	{
	  ILP_Object ilptmp2729;
	  ILP_Object ilptmp2730;
	  ilptmp2729 = x1;
	  ilptmp2730 = y2;
	  ilptmp2726 = ILP_Times (ilptmp2729, ilptmp2730);
	}

	{
	  ILP_Object x3 = ilptmp2725;
	  ILP_Object y4 = ilptmp2726;
	  {
	    ILP_Object ilptmp2731;
	    ILP_Object ilptmp2732;
	    ilptmp2731 = x3;
	    ilptmp2732 = y4;
	    return ILP_Times (ilptmp2731, ilptmp2732);
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
