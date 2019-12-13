#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x1, ILP_Object y2);

/* Global functions */

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x1, ILP_Object y2)
{
  {
    ILP_Object ilptmp2488;
    ILP_Object ilptmp2489;
    ilptmp2488 = x1;
    ilptmp2489 = y2;
    return ILP_Plus (ilptmp2488, ilptmp2489);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    2,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2490;
    ILP_Object ilptmp2491;
    {
      ILP_Object ilptmp2492;
      ilptmp2492 = ILP_TRUE;
      if (ILP_isEquivalentToTrue (ilptmp2492))
	{
	  ilptmp2490 = ILP_Integer2ILP (8);

	}
      else
	{
	  ilptmp2490 = ILP_Integer2ILP (1);

	}
    }
    {
      ILP_Object ilptmp2493;
      ilptmp2493 = ILP_Integer2ILP (8);

      {
	ILP_Object x3 = ilptmp2493;
	{
	  ILP_Object ilptmp2494;
	  ILP_Object ilptmp2495;
	  ilptmp2494 = x3;
	  ilptmp2495 = x3;
	  ilptmp2491 = ILP_Times (ilptmp2494, ilptmp2495);
	}

      }
    }
    return ilp__foo (NULL, ilptmp2490, ilptmp2491);
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
