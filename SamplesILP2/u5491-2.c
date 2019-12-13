#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object f;

/* Global prototypes */
ILP_Object ilp__f (ILP_Closure ilp_useless, ILP_Object ma_3angle1);

/* Global functions */

ILP_Object
ilp__f (ILP_Closure ilp_useless, ILP_Object ma_3angle1)
{
  {
    ILP_Object ilptmp2285;
    ILP_Object ilptmp2286;
    ilptmp2285 = ma_3angle1;
    ilptmp2286 = ILP_Integer2ILP (3);
    return ILP_Divide (ilptmp2285, ilptmp2286);
  }
}

struct ILP_Closure f_closure_object = {
  &ILP_object_Closure_class,
  {{ilp__f,
    1,
    {NULL}}}
};


/* Classes */


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp2287;
    {
      ILP_Object ilptmp2288;
      ILP_Object ilptmp2289;
      ilptmp2288 = ILP_Integer2ILP (3);
      ilptmp2289 = ILP_Integer2ILP (5491);
      ilptmp2287 = ILP_Times (ilptmp2288, ilptmp2289);
    }
    return ilp__f (NULL, ilptmp2287);
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
