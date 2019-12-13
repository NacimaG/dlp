#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object print;
ILP_Object throw;

/* Global prototypes */

/* Global functions */


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1532;
    ilptmp1532 = ILP_Integer2ILP (1);

    {
      ILP_Object x1 = ilptmp1532;
      {
	ILP_Object ilptmp1533;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_Object ilptmp1534;
		{
		  ILP_Object ilptmp1535;
		  ilptmp1535 = ILP_Integer2ILP (6);
		  ilptmp1534 = ILP_throw (ilptmp1535);
		}
		{
		  ILP_Object ilptmp1536;
		  ilptmp1536 = ILP_Integer2ILP (4);
		  ilptmp1534 = (x1 = ilptmp1536);
		}
		ilptmp1533 = ilptmp1534;
	      }
	      ILP_current_exception = NULL;
	    };
	  ILP_reset_catcher (current_catcher);
	  if (NULL != ILP_current_exception)
	    {
	      if (0 == setjmp (new_catcher._jmp_buf))
		{
		  ILP_establish_catcher (&new_catcher);
		  {
		    ILP_Object exc2 = ILP_current_exception;
		    ILP_current_exception = NULL;
		    {
		      ILP_Object ilptmp1537;
		      ilptmp1537 = exc2;
		      (void) (x1 = ilptmp1537);
		    }
		  }
		};
	    };
	  ILP_reset_catcher (current_catcher);
	  {
	    ILP_Object ilptmp1538;
	    {
	      ILP_Object ilptmp1539;
	      ILP_Object ilptmp1540;
	      ilptmp1539 = ILP_Integer2ILP (1);
	      ilptmp1540 = x1;
	      ilptmp1538 = ILP_Plus (ilptmp1539, ilptmp1540);
	    }
	    (void) (x1 = ilptmp1538);
	  }
	  if (NULL != ILP_current_exception)
	    {
	      ILP_throw (ILP_current_exception);
	    };
	  ilptmp1533 = ILP_FALSE;
	}
	{
	  ILP_Object ilptmp1541;
	  ilptmp1541 = x1;
	  ilptmp1533 = ILP_print (ilptmp1541);
	}
	{
	  ILP_Object ilptmp1542;
	  ILP_Object ilptmp1543;
	  ilptmp1542 = x1;
	  ilptmp1543 = ILP_Integer2ILP (7);
	  ilptmp1533 = ILP_Equal (ilptmp1542, ilptmp1543);
	}
	return ilptmp1533;
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
