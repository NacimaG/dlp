#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */
ILP_Object ilpclosure3 (ILP_Closure ilp_closure, ILP_Object y2);

/* Global functions */
ILP_Object
ilpclosure3 (ILP_Closure ilp_closure, ILP_Object y2)
{
  ILP_Object x1 = ilp_closure->_content.asClosure.closed_variables[0];
  {
    ILP_Object ilptmp1754;
    ILP_Object ilptmp1755;
    ilptmp1754 = ILP_Box2Value (x1);
    ilptmp1755 = y2;
    return ILP_Plus (ilptmp1754, ilptmp1755);
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1756;
    ilptmp1756 = ILP_Integer2ILP (3);

    {
      ILP_Object x1 = ILP_Value2Box (ilptmp1756);
      {
	ILP_Object ilptmp1757;
	ILP_Object ilptmp1758;
	{
	  ILP_Object ilptmp1759;
	  ilptmp1759 = ILP_make_closure (ilpclosure3, 1, 1, x1);

	  {
	    ILP_Object f4 = ilptmp1759;
	    ilptmp1757 = f4;

	  }
	}
	ilptmp1758 = ILP_Integer2ILP (7500);
	return ILP_invoke (ilptmp1757, 1, ilptmp1758);
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
