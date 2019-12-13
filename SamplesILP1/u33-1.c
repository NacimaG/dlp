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
    ILP_Object ilptmp2761;
    ilptmp2761 = ILP_Integer2ILP (33);

    {
      ILP_Object u1 = ilptmp2761;
      {
	ILP_Object ilptmp2762;
	ilptmp2762 = ILP_String2ILP ("foobar");
	{
	  ILP_Object ilptmp2763;
	  ILP_Object ilptmp2764;
	  ilptmp2763 = u1;
	  ilptmp2764 = ILP_Integer2ILP (22);
	  ilptmp2762 = ILP_Plus (ilptmp2763, ilptmp2764);
	}
	return ilptmp2762;
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
