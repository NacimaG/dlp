#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */
ILP_Object ilpclosure2 (ILP_Closure ilp_closure);

/* Global functions */
ILP_Object
ilpclosure2 (ILP_Closure ilp_closure)
{
  ILP_Object n1 = ilp_closure->_content.asClosure.closed_variables[0];
  {
    ILP_Object ilptmp1846;
    {
      ILP_Object ilptmp1847;
      {
	ILP_Object ilptmp1848;
	ILP_Object ilptmp1849;
	ilptmp1848 = ILP_Box2Value (n1);
	ilptmp1849 = ILP_Integer2ILP (1);
	ilptmp1847 = ILP_Plus (ilptmp1848, ilptmp1849);
      }
      ilptmp1846 = (ILP_SetBoxedValue (n1, ilptmp1847));
    }
    ilptmp1846 = ILP_Box2Value (n1);
    return ilptmp1846;
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1850;
    ilptmp1850 = ILP_Integer2ILP (7507);

    {
      ILP_Object n1 = ILP_Value2Box (ilptmp1850);
      {
	ILP_Object ilptmp1851;
	ilptmp1851 = ILP_make_closure (ilpclosure2, 0, 1, n1);
	return ILP_invoke (ilptmp1851, 0);
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
