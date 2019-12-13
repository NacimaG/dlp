#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (2);
extern struct ILP_Class2 ILP_object_Po_3aint_class;
extern struct ILP_Field ILP_object_x_field;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__print_2 (ILP_Closure ilp_useless, ILP_Object self1);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Po_3aint_class,
    NULL,
    "x",
    0}}
};

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Po_3aint_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class2 ILP_object_Po_3aint_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Po_3aint",
    2,
    &ILP_object_y_field,
    2,
    {ilp__print_2,
     ILPm_classOf,
     }}}
};

ILP_Object
ilp__print_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_print_method;
  static ILP_general_function ilp_SuperMethod = ILPm_print;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    return ILP_Integer2ILP (8451);
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_general_function ilptmp993;
    ILP_Object ilptmp994;
    {
      ILP_Object ilptmp995;
      ILP_Object ilptmp996;
      ILP_Object ilptmp997;
      ilptmp996 = ILP_Integer2ILP (11);
      ilptmp997 = ILP_Integer2ILP (22);
      ilptmp995 = ILP_MakeInstance (Po_3aint);
      ilptmp995->_content.asInstance.field[0] = ilptmp996;
      ilptmp995->_content.asInstance.field[1] = ilptmp997;
      ilptmp994 = ilptmp995;
    }
    ilptmp993 = ILP_find_method (ilptmp994, &ILP_object_print_method, 1);
    return ilptmp993 (NULL, ilptmp994);
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
