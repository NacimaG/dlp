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
    ILP_Object ilptmp1391;
    ILP_Object ilptmp1392;
    ilptmp1391 = ILP_Integer2ILP (2);
    ilptmp1392 = x1;
    return ILP_Times (ilptmp1391, ilptmp1392);
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
    ILP_Object ilptmp1393;
    ilptmp1393 = ILP_Integer2ILP (11);

    {
      ILP_Object x4 = ilptmp1393;
      {
	ILP_Object ilptmp1394;
	{
	  ILP_Object ilptmp1395;
	  ILP_Object ilptmp1396;
	  {
	    ILP_Object ilptmp1397;
	    {
	      ILP_Object ilptmp1398;
	      ILP_Object ilptmp1399;
	      ilptmp1398 = x4;
	      ilptmp1399 = ILP_Integer2ILP (1);
	      ilptmp1397 = ILP_Plus (ilptmp1398, ilptmp1399);
	    }
	    ilptmp1395 = (x4 = ilptmp1397);
	  }
	  ilptmp1396 = x4;
	  ilptmp1394 = ilp__pseudosequence (NULL, ilptmp1395, ilptmp1396);
	}
	return ilp__foo (NULL, ilptmp1394);
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
