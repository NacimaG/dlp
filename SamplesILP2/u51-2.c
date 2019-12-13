#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;

/* Global prototypes */

/* Global functions */


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2201;
    ilptmp2201 = ILP_Integer2ILP (49);

    {
      ILP_Object x1 = ilptmp2201;
      {
	ILP_Object ilptmp2202;
	{
	  ILP_Object ilptmp2203;
	  ilptmp2203 = x1;
	  ilptmp2202 = ILP_print (ilptmp2203);
	}
	{
	  ILP_Object ilptmp2204;
	  {
	    ILP_Object ilptmp2205;
	    ILP_Object ilptmp2206;
	    ilptmp2205 = x1;
	    ilptmp2206 = ILP_Integer2ILP (1);
	    ilptmp2204 = ILP_Plus (ilptmp2205, ilptmp2206);
	  }
	  ilptmp2202 = (x1 = ilptmp2204);
	}
	{
	  ILP_Object ilptmp2207;
	  ilptmp2207 = x1;
	  ilptmp2202 = ILP_print (ilptmp2207);
	}
	{
	  ILP_Object ilptmp2208;
	  {
	    ILP_Object ilptmp2209;
	    ILP_Object ilptmp2210;
	    ilptmp2209 = x1;
	    ilptmp2210 = ILP_Integer2ILP (1);
	    ilptmp2208 = ILP_Plus (ilptmp2209, ilptmp2210);
	  }
	  ilptmp2202 = (x1 = ilptmp2208);
	}
	{
	  ILP_Object ilptmp2211;
	  ilptmp2211 = x1;
	  ilptmp2202 = ILP_print (ilptmp2211);
	}
	ilptmp2202 = x1;
	return ilptmp2202;
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
