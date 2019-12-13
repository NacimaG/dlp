#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object even;
ILP_Object odd;

/* Global prototypes */
ILP_Object ilp__odd (ILP_Closure ilp_useless, ILP_Object n1);
ILP_Object ilp__even (ILP_Closure ilp_useless, ILP_Object n2);

/* Global functions */

ILP_Object
ilp__odd (ILP_Closure ilp_useless, ILP_Object n1)
{
  {
    ILP_Object ilptmp2320;
    {
      ILP_Object ilptmp2321;
      ILP_Object ilptmp2322;
      ilptmp2321 = n1;
      ilptmp2322 = ILP_Integer2ILP (0);
      ilptmp2320 = ILP_Equal (ilptmp2321, ilptmp2322);
    }
    if (ILP_isEquivalentToTrue (ilptmp2320))
      {
	return ILP_FALSE;

      }
    else
      {
	{
	  ILP_Object ilptmp2323;
	  {
	    ILP_Object ilptmp2324;
	    ILP_Object ilptmp2325;
	    ilptmp2324 = n1;
	    ilptmp2325 = ILP_Integer2ILP (1);
	    ilptmp2323 = ILP_Equal (ilptmp2324, ilptmp2325);
	  }
	  if (ILP_isEquivalentToTrue (ilptmp2323))
	    {
	      return ILP_TRUE;

	    }
	  else
	    {
	      {
		ILP_Object ilptmp2326;
		{
		  ILP_Object ilptmp2327;
		  ILP_Object ilptmp2328;
		  ilptmp2327 = n1;
		  ilptmp2328 = ILP_Integer2ILP (1);
		  ilptmp2326 = ILP_Minus (ilptmp2327, ilptmp2328);
		}
		return ilp__even (NULL, ilptmp2326);
	      }

	    }
	}

      }
  }
}

struct ILP_Closure odd_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__odd,
    1,
    {NULL}}}
};

ILP_Object
ilp__even (ILP_Closure ilp_useless, ILP_Object n2)
{
  {
    ILP_Object ilptmp2329;
    {
      ILP_Object ilptmp2330;
      ILP_Object ilptmp2331;
      ilptmp2330 = n2;
      ilptmp2331 = ILP_Integer2ILP (0);
      ilptmp2329 = ILP_Equal (ilptmp2330, ilptmp2331);
    }
    if (ILP_isEquivalentToTrue (ilptmp2329))
      {
	return ILP_TRUE;

      }
    else
      {
	{
	  ILP_Object ilptmp2332;
	  {
	    ILP_Object ilptmp2333;
	    ILP_Object ilptmp2334;
	    ilptmp2333 = n2;
	    ilptmp2334 = ILP_Integer2ILP (1);
	    ilptmp2332 = ILP_Equal (ilptmp2333, ilptmp2334);
	  }
	  if (ILP_isEquivalentToTrue (ilptmp2332))
	    {
	      return ILP_FALSE;

	    }
	  else
	    {
	      {
		ILP_Object ilptmp2335;
		{
		  ILP_Object ilptmp2336;
		  ILP_Object ilptmp2337;
		  ilptmp2336 = n2;
		  ilptmp2337 = ILP_Integer2ILP (1);
		  ilptmp2335 = ILP_Minus (ilptmp2336, ilptmp2337);
		}
		return ilp__odd (NULL, ilptmp2335);
	      }

	    }
	}

      }
  }
}

struct ILP_Closure even_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__even,
    1,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2338;
    {
      ILP_Object ilptmp2339;
      ilptmp2339 = ILP_Integer2ILP (56);
      ilptmp2338 = ilp__odd (NULL, ilptmp2339);
    }
    return ILP_Not (ilptmp2338);
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
