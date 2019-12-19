#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */
ILP_Object ilpclosure5 (ILP_Closure ilp_closure, ILP_Object t4);
ILP_Object ilpclosure6 (ILP_Closure ilp_closure,
			ILP_Object y2, ILP_Object z3);

/* Global functions */
ILP_Object
ilpclosure5 (ILP_Closure ilp_closure, ILP_Object t4)
{
  ILP_Object z3 = ilp_closure->_content.asClosure.closed_variables[0];
  ILP_Object y2 = ilp_closure->_content.asClosure.closed_variables[1];
  ILP_Object x1 = ilp_closure->_content.asClosure.closed_variables[2];
  {
    ILP_Object ilptmp1803;
    ILP_Object ilptmp1804;
    ilptmp1803 = ILP_Box2Value (x1);
    {
      ILP_Object ilptmp1805;
      ILP_Object ilptmp1806;
      ilptmp1805 = ILP_Box2Value (y2);
      {
	ILP_Object ilptmp1807;
	ILP_Object ilptmp1808;
	ilptmp1807 = ILP_Box2Value (z3);
	ilptmp1808 = t4;
	ilptmp1806 = ILP_Plus (ilptmp1807, ilptmp1808);
      }
      ilptmp1804 = ILP_Plus (ilptmp1805, ilptmp1806);
    }
    return ILP_Plus (ilptmp1803, ilptmp1804);
  }
}

ILP_Object
ilpclosure6 (ILP_Closure ilp_closure, ILP_Object y2, ILP_Object z3)
{
  ILP_Object x1 = ilp_closure->_content.asClosure.closed_variables[0];
  y2 = ILP_Value2Box (y2);
  z3 = ILP_Value2Box (z3);
  return ILP_make_closure (ilpclosure5, 1, 3, z3, y2, x1);
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1809;
    ILP_Object ilptmp1810;
    {
      ILP_Object ilptmp1811;
      ilptmp1811 = ILP_Integer2ILP (500);

      {
	ILP_Object x1 = ILP_Value2Box (ilptmp1811);
	{
	  ILP_Object ilptmp1812;
	  ILP_Object ilptmp1813;
	  ILP_Object ilptmp1814;
	  {
	    ILP_Object ilptmp1815;
	    ilptmp1815 = ILP_make_closure (ilpclosure6, 2, 1, x1);

	    {
	      ILP_Object mkf7 = ilptmp1815;
	      ilptmp1812 = mkf7;

	    }
	  }
	  ilptmp1813 = ILP_Integer2ILP (7000);
	  ilptmp1814 = ILP_Integer2ILP (5);
	  ilptmp1809 = ILP_invoke (ilptmp1812, 2, ilptmp1813, ilptmp1814);
	}

      }
    }
    ilptmp1810 = ILP_Integer2ILP (1);
    return ILP_invoke (ilptmp1809, 1, ilptmp1810);
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
