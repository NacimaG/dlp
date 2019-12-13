#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp2395;
    ILP_Object ilptmp2396;
    ilptmp2395 = ILP_Integer2ILP (2);
    ilptmp2396 = x1;
    return ILP_Times (ilptmp2395, ilptmp2396);
  }
}

struct ILP_Closure deuxfois_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__deuxfois,
    1,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2397;
    ILP_Object ilptmp2398;
    {
      ILP_Object ilptmp2399;
      ILP_Object ilptmp2400;
      {
	ILP_Object ilptmp2401;
	ilptmp2401 = (ILP_Object) & deuxfois_closure_object;
	if (ILP_isEquivalentToTrue (ilptmp2401))
	  {
	    ilptmp2399 = (ILP_Object) & deuxfois_closure_object;

	  }
	else
	  {
	    ilptmp2399 = (ILP_Object) & deuxfois_closure_object;

	  }
      }
      ilptmp2400 = ILP_Integer2ILP (3000);
      ilptmp2397 = ILP_invoke (ilptmp2399, 1, ilptmp2400);
    }
    ilptmp2398 = ILP_Integer2ILP (9);
    return ILP_Minus (ilptmp2397, ilptmp2398);
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
