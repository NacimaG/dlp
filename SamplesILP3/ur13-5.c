#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */
ILP_Object double1_4 (ILP_Closure ilp_closure, ILP_Object x2);

/* Global functions */
ILP_Object
double1_4 (ILP_Closure ilp_closure, ILP_Object x2)
{
  {
    ILP_Object ilptmp1962;
    ILP_Object ilptmp1963;
    ilptmp1962 = x2;
    ilptmp1963 = x2;
    return ILP_Plus (ilptmp1962, ilptmp1963);
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object double1 = ILP_Value2Box (NULL);
    ILP_SetBoxedValue (double1, ILP_make_closure (double1_4, 1, 0));
    {
      ILP_Object ilptmp1964;
      {
	ILP_Object ilptmp1965;
	ilptmp1965 = ILP_String2ILP ("ok");
	ilptmp1964 = ILP_print (ilptmp1965);
      }
      {
	ILP_Object ilptmp1966;
	ILP_Object ilptmp1967;
	ilptmp1966 = ILP_Integer2ILP (1);
	{
	  ILP_Object ilptmp1968;
	  ILP_Object ilptmp1969;
	  ilptmp1968 = ILP_Box2Value (double1);
	  ilptmp1969 = ILP_Integer2ILP (6);
	  ilptmp1967 = ILP_invoke (ilptmp1968, 1, ilptmp1969);
	}
	ilptmp1964 = ILP_Plus (ilptmp1966, ilptmp1967);
      }
      return ilptmp1964;
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
