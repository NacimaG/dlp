#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object apply;
ILP_Object deuxfois;

/* Global prototypes */
ILP_Object ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1);
ILP_Object ilp__apply (ILP_Closure ilp_useless, ILP_Object f2, ILP_Object x3);

/* Global functions */

ILP_Object
ilp__deuxfois (ILP_Closure ilp_useless, ILP_Object x1)
{
  {
    ILP_Object ilptmp2424;
    ILP_Object ilptmp2425;
    ilptmp2424 = ILP_Integer2ILP (2);
    ilptmp2425 = x1;
    return ILP_Times (ilptmp2424, ilptmp2425);
  }
}

struct ILP_Closure deuxfois_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__deuxfois,
    1,
    {NULL}}}
};

ILP_Object
ilp__apply (ILP_Closure ilp_useless, ILP_Object f2, ILP_Object x3)
{
  {
    ILP_Object ilptmp2426;
    ILP_Object ilptmp2427;
    ilptmp2426 = f2;
    ilptmp2427 = x3;
    return ILP_invoke (ilptmp2426, 1, ilptmp2427);
  }
}

struct ILP_Closure apply_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__apply,
    2,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2428;
    ILP_Object ilptmp2429;
    {
      ILP_Object ilptmp2430;
      ILP_Object ilptmp2431;
      ilptmp2430 = (ILP_Object) & deuxfois_closure_object;
      ilptmp2431 = ILP_Integer2ILP (3000);
      ilptmp2428 = ilp__apply (NULL, ilptmp2430, ilptmp2431);
    }
    ilptmp2429 = ILP_Integer2ILP (7);
    return ILP_Minus (ilptmp2428, ilptmp2429);
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
