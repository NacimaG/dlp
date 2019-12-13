#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (2);
extern struct ILP_Class2 ILP_object_Point_class;

struct ILP_Class2 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    0,
    NULL,
    2,
    {ILPm_print,
     ILPm_classOf,
     }}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp3;
    {
      ILP_Object ilptmp4;
      ilptmp4 = ILP_MakeInstance (Point);
      ilptmp3 = ilptmp4;
    }
    ilptmp3 = ILP_Integer2ILP (805);
    return ilptmp3;
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
