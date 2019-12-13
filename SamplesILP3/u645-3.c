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
    ILP_Object ilptmp1508;
    ilptmp1508 = ILP_Integer2ILP (1);

    {
      ILP_Object x1 = ilptmp1508;
      {
	ILP_Object ilptmp1509;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_Object ilptmp1510;
		{
		  ILP_Object ilptmp1511;
		  ILP_Object ilptmp1512;
		  ilptmp1511 = ILP_Integer2ILP (3);
		  ilptmp1512 = ILP_String2ILP ("foo");
		  ilptmp1510 = ILP_Plus (ilptmp1511, ilptmp1512);
		}
		{
		  ILP_Object ilptmp1513;
		  ilptmp1513 = ILP_Integer2ILP (4);
		  ilptmp1510 = (x1 = ilptmp1513);
		}
		ilptmp1509 = ilptmp1510;
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
		      ILP_Object ilptmp1514;
		      {
			ILP_Object ilptmp1515;
			ILP_Object ilptmp1516;
			ilptmp1515 = ILP_Integer2ILP (5);
			ilptmp1516 = x1;
			ilptmp1514 = ILP_Plus (ilptmp1515, ilptmp1516);
		      }
		      (void) (x1 = ilptmp1514);
		    }
		  }
		};
	    };
	  ILP_reset_catcher (current_catcher);
	  if (NULL != ILP_current_exception)
	    {
	      ILP_throw (ILP_current_exception);
	    };
	  ilptmp1509 = ILP_FALSE;
	}
	{
	  ILP_Object ilptmp1517;
	  ilptmp1517 = x1;
	  ilptmp1509 = ILP_print (ilptmp1517);
	}
	{
	  ILP_Object ilptmp1518;
	  ILP_Object ilptmp1519;
	  ilptmp1518 = x1;
	  ilptmp1519 = ILP_Integer2ILP (6);
	  ilptmp1509 = ILP_Equal (ilptmp1518, ilptmp1519);
	}
	return ilptmp1509;
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
