#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */
ILP_Object fact1_26 (ILP_Closure ilp_closure, ILP_Object n2);

/* Global functions */
ILP_Object
fact1_26 (ILP_Closure ilp_closure, ILP_Object n2)
{
  ILP_Object fact1 = ilp_closure->_content.asClosure.closed_variables[0];
  {
    ILP_Object ilptmp2137;
    {
      ILP_Object ilptmp2138;
      ILP_Object ilptmp2139;
      ilptmp2138 = n2;
      ilptmp2139 = ILP_Integer2ILP (1);
      ilptmp2137 = ILP_LessThanOrEqual (ilptmp2138, ilptmp2139);
    }
    if (ILP_isEquivalentToTrue (ilptmp2137))
      {
	return ILP_Integer2ILP (1);

      }
    else
      {
	{
	  ILP_Object ilptmp2140;
	  ILP_Object ilptmp2141;
	  ilptmp2140 = n2;
	  {
	    ILP_Object ilptmp2142;
	    ILP_Object ilptmp2143;
	    ilptmp2142 = ILP_Box2Value (fact1);
	    {
	      ILP_Object ilptmp2144;
	      ILP_Object ilptmp2145;
	      ilptmp2144 = n2;
	      ilptmp2145 = ILP_Integer2ILP (1);
	      ilptmp2143 = ILP_Minus (ilptmp2144, ilptmp2145);
	    }
	    ilptmp2141 = ILP_invoke (ilptmp2142, 1, ilptmp2143);
	  }
	  return ILP_Times (ilptmp2140, ilptmp2141);
	}

      }
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2146;
    ILP_Object ilptmp2147;
    {
      ILP_Object ilptmp2148;
      ILP_Object ilptmp2149;
      {
	ILP_Object fact1 = ILP_Value2Box (NULL);
	ILP_SetBoxedValue (fact1, ILP_make_closure (fact1_26, 1, 1, fact1));
	ilptmp2148 = ILP_Box2Value (fact1);

      }
      ilptmp2149 = ILP_Integer2ILP (4);
      ilptmp2146 = ILP_invoke (ilptmp2148, 1, ilptmp2149);
    }
    ilptmp2147 = ILP_Integer2ILP (4);
    return ILP_Minus (ilptmp2146, ilptmp2147);
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
