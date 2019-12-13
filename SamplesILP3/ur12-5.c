#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */
ILP_Object double1_2 (ILP_Closure ilp_closure, ILP_Object x2);

/* Global functions */
ILP_Object
double1_2 (ILP_Closure ilp_closure, ILP_Object x2)
{
  {
    ILP_Object ilptmp1950;
    ILP_Object ilptmp1951;
    ilptmp1950 = x2;
    ilptmp1951 = x2;
    return ILP_Plus (ilptmp1950, ilptmp1951);
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object double1 = ILP_Value2Box (NULL);
    ILP_SetBoxedValue (double1, ILP_make_closure (double1_2, 1, 0));
    {
      ILP_Object ilptmp1952;
      {
	ILP_Object ilptmp1953;
	ilptmp1953 = ILP_String2ILP ("ok");
	ilptmp1952 = ILP_print (ilptmp1953);
      }
      ilptmp1952 = ILP_Integer2ILP (12);
      return ilptmp1952;
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
