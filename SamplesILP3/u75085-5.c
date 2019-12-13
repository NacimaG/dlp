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
    ILP_Object ilptmp1870;
    {
      ILP_Object ilptmp1871;
      {
	ILP_Object ilptmp1872;
	ILP_Object ilptmp1873;
	ilptmp1872 = ILP_Box2Value (n1);
	ilptmp1873 = ILP_Integer2ILP (1);
	ilptmp1871 = ILP_Plus (ilptmp1872, ilptmp1873);
      }
      ilptmp1870 = (ILP_SetBoxedValue (n1, ilptmp1871));
    }
    ilptmp1870 = ILP_Box2Value (n1);
    return ilptmp1870;
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1874;
    ilptmp1874 = ILP_Integer2ILP (5);

    {
      ILP_Object n1 = ILP_Value2Box (ilptmp1874);
      {
	ILP_Object ilptmp1875;
	ilptmp1875 = ILP_make_closure (ilpclosure2, 0, 1, n1);
	return ILP_invoke (ilptmp1875, 0);
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
