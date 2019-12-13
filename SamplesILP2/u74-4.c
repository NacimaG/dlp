#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object fr3;
ILP_Object fr2;
ILP_Object f1;
ILP_Object f2;
ILP_Object f3;

/* Global prototypes */
ILP_Object ilp__f1 (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__f2 (ILP_Closure ilp_useless, ILP_Object x2, ILP_Object y3);
ILP_Object ilp__f3 (ILP_Closure ilp_useless, ILP_Object x4);
ILP_Object ilp__fr1 (ILP_Closure ilp_useless, ILP_Object x5);
ILP_Object ilp__fr2 (ILP_Closure ilp_useless, ILP_Object x6);
ILP_Object ilp__fr3 (ILP_Closure ilp_useless, ILP_Object x7);

/* Global functions */

ILP_Object
ilp__f1 (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp2547;
    {
      ILP_Object ilptmp2548;
      ILP_Object ilptmp2549;
      ilptmp2548 = x1;
      ilptmp2549 = ILP_Integer2ILP (74);
      ilptmp2547 = ILP_LessThan (ilptmp2548, ilptmp2549);
    }
    if (ILP_isEquivalentToTrue (ilptmp2547))
      {
	{
	  ILP_Object ilptmp2550;
	  ILP_Object ilptmp2551;
	  ilptmp2550 = ILP_Integer2ILP (2);
	  ilptmp2551 = x1;
	  return ILP_Times (ilptmp2550, ilptmp2551);
	}

      }
    else
      {
	return x1;

      }
  }
}

struct ILP_Closure f1_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f1,
    1,
    {NULL}}}
};

ILP_Object
ilp__f2 (ILP_Closure ilp_useless, ILP_Object x2, ILP_Object y3)
{
  {
    ILP_Object ilptmp2552;
    {
      ILP_Object ilptmp2553;
      ilptmp2553 = x2;
      ilptmp2552 = ilp__f1 (NULL, ilptmp2553);
    }
    return ilp__f1 (NULL, ilptmp2552);
  }
}

struct ILP_Closure f2_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f2,
    2,
    {NULL}}}
};

ILP_Object
ilp__f3 (ILP_Closure ilp_useless, ILP_Object x4)
{
  {
    ILP_Object ilptmp2554;
    ILP_Object ilptmp2555;
    {
      ILP_Object ilptmp2556;
      ilptmp2556 = x4;
      ilptmp2554 = ilp__f1 (NULL, ilptmp2556);
    }
    {
      ILP_Object ilptmp2557;
      ILP_Object ilptmp2558;
      ilptmp2557 = x4;
      ilptmp2558 = x4;
      ilptmp2555 = ilp__f2 (NULL, ilptmp2557, ilptmp2558);
    }
    return ilp__f2 (NULL, ilptmp2554, ilptmp2555);
  }
}

struct ILP_Closure f3_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f3,
    1,
    {NULL}}}
};

ILP_Object
ilp__fr1 (ILP_Closure ilp_useless, ILP_Object x5)
{
  {
    ILP_Object ilptmp2559;
    ilptmp2559 = x5;
    return ilp__fr2 (NULL, ilptmp2559);
  }
}

struct ILP_Closure fr1_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__fr1,
    1,
    {NULL}}}
};

ILP_Object
ilp__fr2 (ILP_Closure ilp_useless, ILP_Object x6)
{
  {
    ILP_Object ilptmp2560;
    {
      ILP_Object ilptmp2561;
      ilptmp2561 = x6;
      ilptmp2560 = ilp__fr3 (NULL, ilptmp2561);
    }
    return ilp__fr3 (NULL, ilptmp2560);
  }
}

struct ILP_Closure fr2_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__fr2,
    1,
    {NULL}}}
};

ILP_Object
ilp__fr3 (ILP_Closure ilp_useless, ILP_Object x7)
{
  {
    ILP_Object ilptmp2562;
    {
      ILP_Object ilptmp2563;
      {
	ILP_Object ilptmp2564;
	ilptmp2564 = x7;
	ilptmp2563 = ilp__f3 (NULL, ilptmp2564);
      }
      ilptmp2562 = ilp__f1 (NULL, ilptmp2563);
    }
    return ilp__f3 (NULL, ilptmp2562);
  }
}

struct ILP_Closure fr3_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__fr3,
    1,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2565;
    ilptmp2565 = ILP_Integer2ILP (74);
    return ilp__fr3 (NULL, ilptmp2565);
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
