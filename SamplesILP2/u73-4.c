#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object fr1;
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
    ILP_Object ilptmp2512;
    ILP_Object ilptmp2513;
    ilptmp2512 = ILP_Integer2ILP (2);
    ilptmp2513 = x1;
    return ILP_Times (ilptmp2512, ilptmp2513);
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
    ILP_Object ilptmp2514;
    {
      ILP_Object ilptmp2515;
      ilptmp2515 = x2;
      ilptmp2514 = ilp__f1 (NULL, ilptmp2515);
    }
    return ilp__f1 (NULL, ilptmp2514);
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
    ILP_Object ilptmp2516;
    ILP_Object ilptmp2517;
    {
      ILP_Object ilptmp2518;
      ilptmp2518 = x4;
      ilptmp2516 = ilp__f1 (NULL, ilptmp2518);
    }
    {
      ILP_Object ilptmp2519;
      ILP_Object ilptmp2520;
      ilptmp2519 = x4;
      ilptmp2520 = x4;
      ilptmp2517 = ilp__f2 (NULL, ilptmp2519, ilptmp2520);
    }
    return ilp__f2 (NULL, ilptmp2516, ilptmp2517);
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
    ILP_Object ilptmp2521;
    ilptmp2521 = x5;
    return ilp__fr2 (NULL, ilptmp2521);
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
    ILP_Object ilptmp2522;
    {
      ILP_Object ilptmp2523;
      ilptmp2523 = x6;
      ilptmp2522 = ilp__fr3 (NULL, ilptmp2523);
    }
    return ilp__fr3 (NULL, ilptmp2522);
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
    ILP_Object ilptmp2524;
    {
      ILP_Object ilptmp2525;
      {
	ILP_Object ilptmp2526;
	ilptmp2526 = x7;
	ilptmp2525 = ilp__fr3 (NULL, ilptmp2526);
      }
      ilptmp2524 = ilp__fr1 (NULL, ilptmp2525);
    }
    return ilp__f3 (NULL, ilptmp2524);
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
    ILP_Object ilptmp2527;
    ilptmp2527 = ILP_Integer2ILP (73);
    return ilp__f3 (NULL, ilptmp2527);
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
