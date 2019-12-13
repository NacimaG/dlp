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

ILP_GenerateClass (3);
extern struct ILP_Class3 ILP_object_SousPoint_class;
extern struct ILP_Field ILP_object_sous_field;
ILP_Object ilp__m1_2 (ILP_Closure ilp_useless, ILP_Object self1);

struct ILP_Field ILP_object_sous_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_SousPoint_class,
    NULL,
    "sous",
    0}}
};

struct ILP_Class3 ILP_object_SousPoint_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "SousPoint",
    1,
    &ILP_object_sous_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_2,
     }}}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_SousPoint_class,
    "m1",
    1,				/* arité */
    2				/* offset */
    }}
};

ILP_Object
ilp__m1_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp604;
      ilptmp604 = self1;
      if (ILP_IsA (ilptmp604, SousPoint))
	{
	  return ilptmp604->_content.asInstance.field[0];
	}
      else
	{
	  return ILP_UnknownFieldError ("sous", ilptmp604);
	}
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_general_function ilptmp605;
    ILP_Object ilptmp606;
    {
      ILP_Object ilptmp607;
      ILP_Object ilptmp608;
      ilptmp608 = ILP_Integer2ILP (828);
      ilptmp607 = ILP_MakeInstance (SousPoint);
      ilptmp607->_content.asInstance.field[0] = ilptmp608;
      ilptmp606 = ilptmp607;
    }
    ilptmp605 = ILP_find_method (ilptmp606, &ILP_object_m1_method, 1);
    return ilptmp605 (NULL, ilptmp606);
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
