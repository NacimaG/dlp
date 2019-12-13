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
    ILP_Object ilptmp1620;
    ilptmp1620 = ILP_Integer2ILP (1);

    {
      ILP_Object x1 = ilptmp1620;
      {
	ILP_Object ilptmp1621;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_Object ilptmp1622;
		{
		  ILP_Object ilptmp1623;
		  {
		    ILP_Object ilptmp1624;
		    ILP_Object ilptmp1625;
		    ilptmp1624 = x1;
		    ilptmp1625 = ILP_Integer2ILP (1);
		    ilptmp1623 = ILP_Plus (ilptmp1624, ilptmp1625);
		  }
		  ilptmp1622 = (x1 = ilptmp1623);
		}
		{
		  struct ILP_catcher *current_catcher = ILP_current_catcher;
		  struct ILP_catcher new_catcher;
		  if (0 == setjmp (new_catcher._jmp_buf))
		    {
		      ILP_establish_catcher (&new_catcher);
		      {
			ILP_Object ilptmp1626;
			{
			  ILP_Object ilptmp1627;
			  {
			    ILP_Object ilptmp1628;
			    ILP_Object ilptmp1629;
			    ilptmp1628 = x1;
			    ilptmp1629 = ILP_Integer2ILP (1);
			    ilptmp1627 = ILP_Plus (ilptmp1628, ilptmp1629);
			  }
			  ilptmp1626 = (x1 = ilptmp1627);
			}
			{
			  ILP_Object ilptmp1630;
			  ilptmp1630 = x1;
			  ilptmp1626 = ILP_throw (ilptmp1630);
			}
			ilptmp1622 = ilptmp1626;
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
			      ILP_Object ilptmp1631;
			      {
				ILP_Object ilptmp1632;
				ilptmp1632 = x1;
				ilptmp1631 = ILP_print (ilptmp1632);
			      }
			      {
				ILP_Object ilptmp1633;
				ilptmp1633 = exc2;
				ilptmp1631 = ILP_print (ilptmp1633);
			      }
			      {
				ILP_Object ilptmp1634;
				{
				  ILP_Object ilptmp1635;
				  ILP_Object ilptmp1636;
				  ilptmp1635 = ILP_Integer2ILP (2);
				  {
				    ILP_Object ilptmp1637;
				    ILP_Object ilptmp1638;
				    ilptmp1637 = x1;
				    ilptmp1638 = exc2;
				    ilptmp1636 =
				      ILP_Times (ilptmp1637, ilptmp1638);
				  }
				  ilptmp1634 =
				    ILP_Times (ilptmp1635, ilptmp1636);
				}
				ilptmp1631 = (x1 = ilptmp1634);
			      }
			      {
				ILP_Object ilptmp1639;
				ilptmp1639 = x1;
				ilptmp1631 = ILP_throw (ilptmp1639);
			      }
			      (void) ilptmp1631;
			    }
			  }
			};
		    };
		  ILP_reset_catcher (current_catcher);
		  if (NULL != ILP_current_exception)
		    {
		      ILP_throw (ILP_current_exception);
		    };
		  ilptmp1622 = ILP_FALSE;
		}
		ilptmp1621 = ilptmp1622;
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
		    ILP_Object exc4 = ILP_current_exception;
		    ILP_current_exception = NULL;
		    {
		      ILP_Object ilptmp1640;
		      {
			ILP_Object ilptmp1641;
			ilptmp1641 = x1;
			ilptmp1640 = ILP_print (ilptmp1641);
		      }
		      {
			ILP_Object ilptmp1642;
			ilptmp1642 = exc4;
			ilptmp1640 = ILP_print (ilptmp1642);
		      }
		      {
			ILP_Object ilptmp1643;
			{
			  ILP_Object ilptmp1644;
			  ILP_Object ilptmp1645;
			  ilptmp1644 = ILP_Integer2ILP (3);
			  {
			    ILP_Object ilptmp1646;
			    ILP_Object ilptmp1647;
			    ilptmp1646 = x1;
			    ilptmp1647 = exc4;
			    ilptmp1645 = ILP_Times (ilptmp1646, ilptmp1647);
			  }
			  ilptmp1643 = ILP_Times (ilptmp1644, ilptmp1645);
			}
			ilptmp1640 = (x1 = ilptmp1643);
		      }
		      (void) ilptmp1640;
		    }
		  }
		};
	    };
	  ILP_reset_catcher (current_catcher);
	  if (NULL != ILP_current_exception)
	    {
	      ILP_throw (ILP_current_exception);
	    };
	  ilptmp1621 = ILP_FALSE;
	}
	{
	  ILP_Object ilptmp1648;
	  ILP_Object ilptmp1649;
	  ilptmp1648 = x1;
	  ilptmp1649 = ILP_Integer2ILP (972);
	  ilptmp1621 = ILP_Equal (ilptmp1648, ilptmp1649);
	}
	return ilptmp1621;
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
