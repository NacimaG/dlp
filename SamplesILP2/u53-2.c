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
    ILP_Object ilptmp2246;
    ilptmp2246 = ILP_Integer2ILP (5);

    {
      ILP_Object x1 = ilptmp2246;
      {
	ILP_Object ilptmp2247;
	while (1)
	  {
	    ILP_Object ilptmp2248;
	    {
	      ILP_Object ilptmp2249;
	      ILP_Object ilptmp2250;
	      ilptmp2249 = x1;
	      ilptmp2250 = ILP_Integer2ILP (53);
	      ilptmp2248 = ILP_LessThan (ilptmp2249, ilptmp2250);
	    }
	    if (ILP_isEquivalentToTrue (ilptmp2248))
	      {
		{
		  ILP_Object ilptmp2251;
		  {
		    ILP_Object ilptmp2252;
		    ilptmp2252 = x1;
		    ilptmp2251 = ILP_print (ilptmp2252);
		  }
		  {
		    ILP_Object ilptmp2253;
		    {
		      ILP_Object ilptmp2254;
		      ILP_Object ilptmp2255;
		      ilptmp2254 = ILP_Integer2ILP (2);
		      ilptmp2255 = x1;
		      ilptmp2253 = ILP_Times (ilptmp2254, ilptmp2255);
		    }
		    ilptmp2251 = (x1 = ilptmp2253);
		  }
		  while (1)
		    {
		      ILP_Object ilptmp2256;
		      {
			ILP_Object ilptmp2257;
			ILP_Object ilptmp2258;
			ilptmp2257 = x1;
			ilptmp2258 = ILP_Integer2ILP (53);
			ilptmp2256 = ILP_GreaterThan (ilptmp2257, ilptmp2258);
		      }
		      if (ILP_isEquivalentToTrue (ilptmp2256))
			{
			  {
			    ILP_Object ilptmp2259;
			    {
			      ILP_Object ilptmp2260;
			      ilptmp2260 = x1;
			      ilptmp2259 = ILP_print (ilptmp2260);
			    }
			    {
			      ILP_Object ilptmp2261;
			      {
				ILP_Object ilptmp2262;
				ILP_Object ilptmp2263;
				ilptmp2262 = x1;
				ilptmp2263 = ILP_Integer2ILP (3);
				ilptmp2261 =
				  ILP_Minus (ilptmp2262, ilptmp2263);
			      }
			      ilptmp2259 = (x1 = ilptmp2261);
			    }
			    (void) ilptmp2259;
			  }

			}
		      else
			{
			  break;

			}
		    }
		  ilptmp2251 = ILP_FALSE;
		  (void) ilptmp2251;
		}

	      }
	    else
	      {
		break;

	      }
	  }
	ilptmp2247 = ILP_FALSE;
	ilptmp2247 = x1;
	return ilptmp2247;
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
