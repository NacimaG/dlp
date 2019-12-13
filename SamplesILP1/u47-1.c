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
    ILP_Object ilptmp2810;
    {
      ILP_Object ilptmp2811;
      ilptmp2811 = ILP_FALSE;
      if (ILP_isEquivalentToTrue (ilptmp2811))
	{
	  {
	    ILP_Object ilptmp2812;
	    ilptmp2812 = ILP_String2ILP ("invisible");
	    ilptmp2810 = ILP_print (ilptmp2812);
	  }

	}
      else
	{
	  ilptmp2810 = ILP_FALSE;

	}
    }
    ilptmp2810 = ILP_Integer2ILP (47);
    return ilptmp2810;
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
