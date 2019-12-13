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
ILP_Object ilp__m1_4 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object z2, ILP_Object t3);

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
     ilp__m1_4,
     }}}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    3,				/* arité */
    2				/* offset */
    }}
};

ILP_Object
ilp__m1_4 (ILP_Closure ilp_useless,
	   ILP_Object self1, ILP_Object z2, ILP_Object t3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = z2;
  ilp_CurrentArguments[2] = t3;

  {
    {
      ILP_Object ilptmp77;
      ILP_Object ilptmp78;
      ilptmp77 = z2;
      ilptmp78 = t3;
      return ILP_Plus (ilptmp77, ilptmp78);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp79;
    {
      ILP_Object ilptmp80;
      ILP_Object ilptmp81;
      ILP_Object ilptmp82;
      ilptmp81 = ILP_Integer2ILP (11);
      ilptmp82 = ILP_Integer2ILP (22);
      ilptmp80 = ILP_MakeInstance (Point);
      ilptmp80->_content.asInstance.field[0] = ilptmp81;
      ilptmp80->_content.asInstance.field[1] = ilptmp82;
      ilptmp79 = ilptmp80;
    }

    {
      ILP_Object point5 = ilptmp79;
      {
	ILP_general_function ilptmp83;
	ILP_Object ilptmp84;
	ILP_Object ilptmp85;
	ILP_Object ilptmp86;
	ilptmp84 = point5;
	ilptmp85 = ILP_Integer2ILP (800);
	ilptmp86 = ILP_Integer2ILP (13);
	ilptmp83 = ILP_find_method (ilptmp84, &ILP_object_m1_method, 3);
	return ilptmp83 (NULL, ilptmp84, ilptmp85, ilptmp86);
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
