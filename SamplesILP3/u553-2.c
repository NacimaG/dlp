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
    ILP_Object ilptmp1319;
    ILP_Object ilptmp1320;
    ilptmp1319 = ILP_Integer2ILP (2);
    ilptmp1320 = x1;
    return ILP_Times (ilptmp1319, ilptmp1320);
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
    ILP_Object ilptmp1321;
    ilptmp1321 = ILP_FALSE;
    if (ILP_isEquivalentToTrue (ilptmp1321))
      {
	return ILP_Integer2ILP (553);

      }
    else
      {
	{
	  ILP_Object ilptmp1322;
	  ilptmp1322 = ILP_Integer2ILP (553);
	  return ilp__foo (NULL, ilptmp1322);
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
