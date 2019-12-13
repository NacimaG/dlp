#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x1);

/* Global functions */

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp1311;
    ILP_Object ilptmp1312;
    ilptmp1311 = ILP_Integer2ILP (2);
    ilptmp1312 = x1;
    return ILP_Times (ilptmp1311, ilptmp1312);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    1,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1313;
    ilptmp1313 = ILP_TRUE;
    if (ILP_isEquivalentToTrue (ilptmp1313))
      {
	{
	  ILP_Object ilptmp1314;
	  ilptmp1314 = ILP_Integer2ILP (3);
	  return ilp__foo (NULL, ilptmp1314);
	}

      }
    else
      {
	return ILP_Integer2ILP (552);

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
