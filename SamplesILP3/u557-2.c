#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object bar;
ILP_Object foo;

/* Global prototypes */
ILP_Object ilp__bar (ILP_Closure ilp_useless, ILP_Object y1);
ILP_Object ilp__foo (ILP_Closure ilp_useless, ILP_Object x2);

/* Global functions */

ILP_Object
ilp__bar (ILP_Closure ilp_useless, ILP_Object y1)
{
  {
    ILP_Object ilptmp1376;
    ILP_Object ilptmp1377;
    ilptmp1376 = ILP_Integer2ILP (3);
    {
      ILP_Object ilptmp1378;
      ilptmp1378 = y1;
      ilptmp1377 = ilp__foo (NULL, ilptmp1378);
    }
    return ILP_Plus (ilptmp1376, ilptmp1377);
  }
}

struct ILP_Closure bar_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__bar,
    1,
    {NULL}}}
};

ILP_Object
ilp__foo (ILP_Closure ilp_useless, ILP_Object x2)
{
  {
    ILP_Object ilptmp1379;
    ILP_Object ilptmp1380;
    ilptmp1379 = ILP_Integer2ILP (2);
    ilptmp1380 = x2;
    return ILP_Times (ilptmp1379, ilptmp1380);
  }
}

struct ILP_Closure foo_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__foo,
    1,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1381;
    ilptmp1381 = ILP_Integer2ILP (557);
    return ilp__bar (NULL, ilptmp1381);
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
