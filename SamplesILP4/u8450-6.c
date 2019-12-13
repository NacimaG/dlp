#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (2);
extern struct ILP_Class2 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_3ax_field;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__print_2 (ILP_Closure ilp_useless, ILP_Object self1);

struct ILP_Field ILP_object_x_3ax_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x_3ax",
    0}}
};

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    &ILP_object_x_3ax_field,
    "y",
    1}}
};

struct ILP_Class2 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
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
    {
      ILP_Object ilptmp982;
      ilptmp982 = self1;
      if (ILP_IsA (ilptmp982, Point))
	{
	  return ilptmp982->_content.asInstance.field[0];
	}
      else
	{
	  return ILP_UnknownFieldError ("x_3ax", ilptmp982);
	}
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_general_function ilptmp983;
    ILP_Object ilptmp984;
    {
      ILP_Object ilptmp985;
      ILP_Object ilptmp986;
      ILP_Object ilptmp987;
      ilptmp986 = ILP_Integer2ILP (8450);
      ilptmp987 = ILP_Integer2ILP (22);
      ilptmp985 = ILP_MakeInstance (Point);
      ilptmp985->_content.asInstance.field[0] = ilptmp986;
      ilptmp985->_content.asInstance.field[1] = ilptmp987;
      ilptmp984 = ilptmp985;
    }
    ilptmp983 = ILP_find_method (ilptmp984, &ILP_object_print_method, 1);
    return ilptmp983 (NULL, ilptmp984);
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
