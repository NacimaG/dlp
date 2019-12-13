#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object pseudosequence;
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__pseudosequence (ILP_Closure ilp_useless,
				ILP_Object one2, ILP_Object two3);

/* Global functions */

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp2363;
    ILP_Object ilptmp2364;
    ilptmp2363 = ILP_Integer2ILP (2);
    ilptmp2364 = x1;
    return ILP_Times (ilptmp2363, ilptmp2364);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    1,
    {NULL}}}
};

ILP_Object
ilp__pseudosequence (ILP_Closure ilp_useless,
		     ILP_Object one2, ILP_Object two3)
{
  return two3;
}

struct ILP_Closure pseudosequence_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__pseudosequence,
    2,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2365;
    ilptmp2365 = ILP_Integer2ILP (11);

    {
      ILP_Object y4 = ilptmp2365;
      {
	ILP_Object ilptmp2366;
	{
	  ILP_Object ilptmp2367;
	  ILP_Object ilptmp2368;
	  {
	    ILP_Object ilptmp2369;
	    {
	      ILP_Object ilptmp2370;
	      ILP_Object ilptmp2371;
	      ilptmp2370 = y4;
	      ilptmp2371 = ILP_Integer2ILP (1);
	      ilptmp2369 = ILP_Plus (ilptmp2370, ilptmp2371);
	    }
	    ilptmp2367 = (y4 = ilptmp2369);
	  }
	  ilptmp2368 = y4;
	  ilptmp2366 = ilp__pseudosequence (NULL, ilptmp2367, ilptmp2368);
	}
	return ilp__foo (NULL, ilptmp2366);
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
