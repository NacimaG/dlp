#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object g;
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp2460;
    ILP_Object ilptmp2461;
    ilptmp2460 = ILP_Integer2ILP (2);
    ilptmp2461 = x1;
    return ILP_Times (ilptmp2460, ilptmp2461);
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
    ILP_Object ilptmp2462;
    {
      ILP_Object ilptmp2463;
      ilptmp2463 = (ILP_Object) & deuxfois_closure_object;

      {
	ILP_Object f2 = ilptmp2463;
	{
	  ILP_Object ilptmp2464;
	  ilptmp2464 = f2;
	  ilptmp2462 = (g = ilptmp2464);
	}

      }
    }
    {
      ILP_Object ilptmp2465;
      ILP_Object ilptmp2466;
      {
	ILP_Object ilptmp2467;
	ilptmp2467 = ILP_Integer2ILP (3000);
	ilptmp2465 = ILP_invoke (g, 1, ilptmp2467);
      }
      ilptmp2466 = ILP_Integer2ILP (5);
      ilptmp2462 = ILP_Minus (ilptmp2465, ilptmp2466);
    }
    return ilptmp2462;
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
