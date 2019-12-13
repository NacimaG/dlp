#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (3);
extern struct ILP_Class3 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_field;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1);

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

struct ILP_Class3 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    2,
    &ILP_object_y_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__longueur_2,
     }}}
};

struct ILP_Method ILP_object_longueur_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "longueur",
    1,				/* arité */
    2				/* offset */
    }}
};

ILP_Object
ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp121;
      ILP_Object ilptmp122;
      {
	ILP_Object ilptmp123;
	ilptmp123 = self1;
	if (ILP_IsA (ilptmp123, Point))
	  {
	    ilptmp121 = ilptmp123->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp121 = ILP_UnknownFieldError ("x", ilptmp123);
	  }
      }
      {
	ILP_Object ilptmp124;
	ilptmp124 = self1;
	if (ILP_IsA (ilptmp124, Point))
	  {
	    ilptmp122 = ilptmp124->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp122 = ILP_UnknownFieldError ("y", ilptmp124);
	  }
      }
      return ILP_Plus (ilptmp121, ilptmp122);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp125;
    {
      ILP_Object ilptmp126;
      ILP_Object ilptmp127;
      ILP_Object ilptmp128;
      ilptmp127 = ILP_Integer2ILP (810);
      ilptmp128 = ILP_Integer2ILP (2);
      ilptmp126 = ILP_MakeInstance (Point);
      ilptmp126->_content.asInstance.field[0] = ilptmp127;
      ilptmp126->_content.asInstance.field[1] = ilptmp128;
      ilptmp125 = ilptmp126;
    }

    {
      ILP_Object point3 = ilptmp125;
      {
	ILP_general_function ilptmp129;
	ILP_Object ilptmp130;
	ilptmp130 = point3;
	ilptmp129 =
	  ILP_find_method (ilptmp130, &ILP_object_longueur_method, 1);
	return ilptmp129 (NULL, ilptmp130);
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
