#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object pseudosequence;
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__pseudosequence (ILP_Closure ilp_useless,
				ILP_Object one1, ILP_Object two2);
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x3);

/* Global functions */

ILP_Object
ilp__pseudosequence (ILP_Closure ilp_useless,
		     ILP_Object one1, ILP_Object two2)
{
  return two2;
}

struct ILP_Closure pseudosequence_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__pseudosequence,
    2,
    {NULL}}}
};

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x3)
{
  {
    ILP_Object ilptmp2380;
    ILP_Object ilptmp2381;
    ilptmp2380 = ILP_Integer2ILP (2);
    ilptmp2381 = x3;
    return ILP_Times (ilptmp2380, ilptmp2381);
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
    ILP_Object ilptmp2382;
    ilptmp2382 = ILP_Integer2ILP (12);

    {
      ILP_Object y4 = ilptmp2382;
      {
	ILP_Object ilptmp2383;
	{
	  ILP_Object ilptmp2384;
	  ILP_Object ilptmp2385;
	  {
	    ILP_Object ilptmp2386;
	    {
	      ILP_Object ilptmp2387;
	      ilptmp2387 = y4;
	      ilptmp2386 = ilp__foo (NULL, ilptmp2387);
	    }
	    ilptmp2384 = (y4 = ilptmp2386);
	  }
	  ilptmp2385 = y4;
	  ilptmp2383 = ilp__pseudosequence (NULL, ilptmp2384, ilptmp2385);
	}
	return ilp__foo (NULL, ilptmp2383);
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
