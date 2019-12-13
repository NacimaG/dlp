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
ILP_Object ilp__print_2 (ILP_Closure ilp_useless, ILP_Object self1);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x",
    0}}
};

struct ILP_Class2 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    1,
    &ILP_object_x_field,
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
      ILP_Object ilptmp1243;
      {
	ILP_Object ilptmp1244;
	ilptmp1244 = ILP_String2ILP ("print@Point");
	ilptmp1243 = ILP_print (ilptmp1244);
      }
      ilptmp1243 = ILP_FindAndCallSuperMethod ();
      return ilptmp1243;
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1245;
    {
      ILP_Object ilptmp1246;
      ILP_Object ilptmp1247;
      ilptmp1247 = ILP_Integer2ILP (8490);
      ilptmp1246 = ILP_MakeInstance (Point);
      ilptmp1246->_content.asInstance.field[0] = ilptmp1247;
      ilptmp1245 = ilptmp1246;
    }

    {
      ILP_Object pc3 = ilptmp1245;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_Object ilptmp1248;
	      {
		ILP_general_function ilptmp1249;
		ILP_Object ilptmp1250;
		ilptmp1250 = pc3;
		ilptmp1249 =
		  ILP_find_method (ilptmp1250, &ILP_object_print_method, 1);
		ilptmp1248 = ilptmp1249 (NULL, ilptmp1250);
	      }
	      ilptmp1248 = ILP_Integer2ILP (8490);
	      return ilptmp1248;
	    }
	    ILP_current_exception = NULL;
	  };
	ILP_reset_catcher (current_catcher);
	if (NULL != ILP_current_exception)
	  {
	    if (0 == setjmp (new_catcher._jmp_buf))
	      {
		ILP_establish_catcher (&new_catcher);
		{
		  ILP_Object e4 = ILP_current_exception;
		  ILP_current_exception = NULL;
		  (void) ILP_FALSE;
		}
	      };
	  };
	ILP_reset_catcher (current_catcher);
	if (NULL != ILP_current_exception)
	  {
	    ILP_throw (ILP_current_exception);
	  };
	return ILP_FALSE;
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
