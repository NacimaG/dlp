#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */
ILP_Object odd1_17 (ILP_Closure ilp_closure, ILP_Object n3);
ILP_Object even2_18 (ILP_Closure ilp_closure, ILP_Object n4);

/* Global functions */
ILP_Object
odd1_17 (ILP_Closure ilp_closure, ILP_Object n3)
{
  ILP_Object even2 = ilp_closure->_content.asClosure.closed_variables[0];
  {
    ILP_Object ilptmp2076;
    {
      ILP_Object ilptmp2077;
      ILP_Object ilptmp2078;
      ilptmp2077 = n3;
      ilptmp2078 = ILP_Integer2ILP (0);
      ilptmp2076 = ILP_Equal (ilptmp2077, ilptmp2078);
    }
    if (ILP_isEquivalentToTrue (ilptmp2076))
      {
	return ILP_FALSE;

      }
    else
      {
	{
	  ILP_Object ilptmp2079;
	  ILP_Object ilptmp2080;
	  ilptmp2079 = ILP_Box2Value (even2);
	  {
	    ILP_Object ilptmp2081;
	    ILP_Object ilptmp2082;
	    ilptmp2081 = n3;
	    ilptmp2082 = ILP_Integer2ILP (1);
	    ilptmp2080 = ILP_Minus (ilptmp2081, ilptmp2082);
	  }
	  return ILP_invoke (ilptmp2079, 1, ilptmp2080);
	}

      }
  }
}

ILP_Object
even2_18 (ILP_Closure ilp_closure, ILP_Object n4)
{
  ILP_Object odd1 = ilp_closure->_content.asClosure.closed_variables[0];
  {
    ILP_Object ilptmp2083;
    {
      ILP_Object ilptmp2084;
      ILP_Object ilptmp2085;
      ilptmp2084 = n4;
      ilptmp2085 = ILP_Integer2ILP (0);
      ilptmp2083 = ILP_LessThanOrEqual (ilptmp2084, ilptmp2085);
    }
    if (ILP_isEquivalentToTrue (ilptmp2083))
      {
	return ILP_TRUE;

      }
    else
      {
	{
	  ILP_Object ilptmp2086;
	  ILP_Object ilptmp2087;
	  ilptmp2086 = ILP_Box2Value (odd1);
	  {
	    ILP_Object ilptmp2088;
	    ILP_Object ilptmp2089;
	    ilptmp2088 = n4;
	    ilptmp2089 = ILP_Integer2ILP (1);
	    ilptmp2087 = ILP_Minus (ilptmp2088, ilptmp2089);
	  }
	  return ILP_invoke (ilptmp2086, 1, ilptmp2087);
	}

      }
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object odd1 = ILP_Value2Box (NULL);
    ILP_Object even2 = ILP_Value2Box (NULL);
    ILP_SetBoxedValue (odd1, ILP_make_closure (odd1_17, 1, 1, even2));
    ILP_SetBoxedValue (even2, ILP_make_closure (even2_18, 1, 1, odd1));
    {
      ILP_Object ilptmp2090;
      ILP_Object ilptmp2091;
      ilptmp2090 = ILP_Box2Value (even2);
      ilptmp2091 = ILP_Integer2ILP (2);
      return ILP_invoke (ilptmp2090, 1, ilptmp2091);
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
