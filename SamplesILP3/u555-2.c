#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object bar;
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__bar (ILP_Closure ilp_useless, ILP_Object x2, ILP_Object y3);

/* Global functions */

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp1350;
    ILP_Object ilptmp1351;
    ilptmp1350 = ILP_Integer2ILP (2);
    ilptmp1351 = x1;
    return ILP_Times (ilptmp1350, ilptmp1351);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    1,
    {NULL}}}
};

ILP_Object
ilp__bar (ILP_Closure ilp_useless, ILP_Object x2, ILP_Object y3)
{
  {
    ILP_Object ilptmp1352;
    ILP_Object ilptmp1353;
    ilptmp1352 = y3;
    ilptmp1353 = x2;
    return ILP_Plus (ilptmp1352, ilptmp1353);
  }
}

struct ILP_Closure bar_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__bar,
    2,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1354;
    ILP_Object ilptmp1355;
    {
      ILP_Object ilptmp1356;
      ilptmp1356 = ILP_Integer2ILP (4);
      ilptmp1354 = ilp__foo (NULL, ilptmp1356);
    }
    {
      ILP_Object ilptmp1357;
      ilptmp1357 = ILP_Integer2ILP (5);
      ilptmp1355 = ilp__foo (NULL, ilptmp1357);
    }
    return ilp__bar (NULL, ilptmp1354, ilptmp1355);
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
