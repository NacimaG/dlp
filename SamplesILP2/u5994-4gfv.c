#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object twice;
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__twice (ILP_Closure ilp_useless, ILP_Object f2, ILP_Object x3);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp2442;
    ILP_Object ilptmp2443;
    ilptmp2442 = ILP_Integer2ILP (2);
    ilptmp2443 = x1;
    return ILP_Times (ilptmp2442, ilptmp2443);
  }
}

struct ILP_Closure deuxfois_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__deuxfois,
    1,
    {NULL}}}
};

ILP_Object
ilp__twice (ILP_Closure ilp_useless, ILP_Object f2, ILP_Object x3)
{
  {
    ILP_Object ilptmp2444;
    ILP_Object ilptmp2445;
    ilptmp2444 = f2;
    {
      ILP_Object ilptmp2446;
      ILP_Object ilptmp2447;
      ilptmp2446 = f2;
      ilptmp2447 = x3;
      ilptmp2445 = ILP_invoke (ilptmp2446, 1, ilptmp2447);
    }
    return ILP_invoke (ilptmp2444, 1, ilptmp2445);
  }
}

struct ILP_Closure twice_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__twice,
    2,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2448;
    ILP_Object ilptmp2449;
    {
      ILP_Object ilptmp2450;
      ILP_Object ilptmp2451;
      ilptmp2450 = (ILP_Object) & deuxfois_closure_object;
      ilptmp2451 = ILP_Integer2ILP (1500);
      ilptmp2448 = ilp__twice (NULL, ilptmp2450, ilptmp2451);
    }
    ilptmp2449 = ILP_Integer2ILP (6);
    return ILP_Minus (ilptmp2448, ilptmp2449);
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
