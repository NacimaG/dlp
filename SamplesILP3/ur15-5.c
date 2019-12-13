#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */
ILP_Object fact1_9 (ILP_Closure ilp_closure, ILP_Object n3);
ILP_Object double2_10 (ILP_Closure ilp_closure, ILP_Object x4);

/* Global functions */
ILP_Object
fact1_9 (ILP_Closure ilp_closure, ILP_Object n3)
{
  ILP_Object fact1 = ilp_closure->_content.asClosure.closed_variables[0];
  {
    ILP_Object ilptmp2011;
    {
      ILP_Object ilptmp2012;
      ILP_Object ilptmp2013;
      ilptmp2012 = n3;
      ilptmp2013 = ILP_Integer2ILP (1);
      ilptmp2011 = ILP_GreaterThan (ilptmp2012, ilptmp2013);
    }
    if (ILP_isEquivalentToTrue (ilptmp2011))
      {
	{
	  ILP_Object ilptmp2014;
	  ILP_Object ilptmp2015;
	  ilptmp2014 = n3;
	  {
	    ILP_Object ilptmp2016;
	    ILP_Object ilptmp2017;
	    ilptmp2016 = ILP_Box2Value (fact1);
	    {
	      ILP_Object ilptmp2018;
	      ILP_Object ilptmp2019;
	      ilptmp2018 = n3;
	      ilptmp2019 = ILP_Integer2ILP (1);
	      ilptmp2017 = ILP_Minus (ilptmp2018, ilptmp2019);
	    }
	    ilptmp2015 = ILP_invoke (ilptmp2016, 1, ilptmp2017);
	  }
	  return ILP_Times (ilptmp2014, ilptmp2015);
	}

      }
    else
      {
	return ILP_Integer2ILP (1);

      }
  }
}

ILP_Object
double2_10 (ILP_Closure ilp_closure, ILP_Object x4)
{
  {
    ILP_Object ilptmp2020;
    ILP_Object ilptmp2021;
    ilptmp2020 = ILP_Integer2ILP (2);
    ilptmp2021 = x4;
    return ILP_Times (ilptmp2020, ilptmp2021);
  }
}


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object fact1 = ILP_Value2Box (NULL);
    ILP_Object double2 = ILP_Value2Box (NULL);
    ILP_SetBoxedValue (fact1, ILP_make_closure (fact1_9, 1, 1, fact1));
    ILP_SetBoxedValue (double2, ILP_make_closure (double2_10, 1, 0));
    {
      ILP_Object ilptmp2022;
      ILP_Object ilptmp2023;
      {
	ILP_Object ilptmp2024;
	ILP_Object ilptmp2025;
	ilptmp2024 = ILP_Box2Value (fact1);
	ilptmp2025 = ILP_Integer2ILP (3);
	ilptmp2022 = ILP_invoke (ilptmp2024, 1, ilptmp2025);
      }
      ilptmp2023 = ILP_Integer2ILP (9);
      return ILP_Plus (ilptmp2022, ilptmp2023);
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
