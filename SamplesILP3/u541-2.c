#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object f;

/* Global prototypes */
ILP_Object ilp__f (ILP_Closure ilp_useless);

/* Global functions */

ILP_Object
ilp__f (ILP_Closure ilp_useless)
{
  return ILP_Integer2ILP (541);
}

struct ILP_Closure f_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f,
    0,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    return ilp__f (NULL);
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
