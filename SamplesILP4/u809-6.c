#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (2);
extern struct ILP_Class2 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_field;
extern struct ILP_Field ILP_object_y_field;

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x",
    0}}
};

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    &ILP_object_x_field,
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
    {ILPm_print,
     ILPm_classOf,
     }}}
};


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp18;
    {
      ILP_Object ilptmp19;
      ILP_Object ilptmp20;
      ILP_Object ilptmp21;
      ilptmp20 = ILP_Integer2ILP (809);
      ilptmp21 = ILP_Integer2ILP (22);
      ilptmp19 = ILP_MakeInstance (Point);
      ilptmp19->_content.asInstance.field[0] = ilptmp20;
      ilptmp19->_content.asInstance.field[1] = ilptmp21;
      ilptmp18 = ilptmp19;
    }

    {
      ILP_Object point1 = ilptmp18;
      {
	ILP_Object ilptmp22;
	ilptmp22 = point1;
	if (ILP_IsA (ilptmp22, Point))
	  {
	    return ilptmp22->_content.asInstance.field[0];
	  }
	else
	  {
	    return ILP_UnknownFieldError ("x", ilptmp22);
	  }
      }

    }
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
