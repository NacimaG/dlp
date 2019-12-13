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
    ILP_Object ilptmp2409;
    ILP_Object ilptmp2410;
    ilptmp2409 = ILP_Integer2ILP (2);
    ilptmp2410 = x1;
    return ILP_Times (ilptmp2409, ilptmp2410);
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
    ILP_Object ilptmp2411;
    ilptmp2411 = (ILP_Object) & deuxfois_closure_object;

    {
      ILP_Object f2 = ilptmp2411;
      {
	ILP_Object ilptmp2412;
	ILP_Object ilptmp2413;
	{
	  ILP_Object ilptmp2414;
	  ILP_Object ilptmp2415;
	  ilptmp2414 = f2;
	  ilptmp2415 = ILP_Integer2ILP (3000);
	  ilptmp2412 = ILP_invoke (ilptmp2414, 1, ilptmp2415);
	}
	ilptmp2413 = ILP_Integer2ILP (8);
	return ILP_Minus (ilptmp2412, ilptmp2413);
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
