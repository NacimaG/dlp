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

extern struct ILP_Class2 ILP_object_Point2D_class;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__print_4 (ILP_Closure ilp_useless, ILP_Object self3);

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point2D_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class2 ILP_object_Point2D_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "Point2D",
    2,
    &ILP_object_y_field,
    2,
    {ilp__print_4,
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
      ILP_Object ilptmp1262;
      {
	ILP_Object ilptmp1263;
	ilptmp1263 = ILP_String2ILP ("print@Point");
	ilptmp1262 = ILP_print (ilptmp1263);
      }
      ilptmp1262 = ILP_FindAndCallSuperMethod ();
      return ilptmp1262;
    }
  }
}

ILP_Object
ilp__print_4 (ILP_Closure ilp_useless, ILP_Object self3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_print_method;
  static ILP_general_function ilp_SuperMethod = ilp__print_2;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self3;

  {
    {
      ILP_Object ilptmp1264;
      {
	ILP_Object ilptmp1265;
	ilptmp1265 = ILP_String2ILP ("print@Point2D");
	ilptmp1264 = ILP_print (ilptmp1265);
      }
      ilptmp1264 = ILP_FindAndCallSuperMethod ();
      return ilptmp1264;
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp1266;
    {
      ILP_Object ilptmp1267;
      ILP_Object ilptmp1268;
      ILP_Object ilptmp1269;
      ilptmp1268 = ILP_Integer2ILP (8491);
      ilptmp1269 = ILP_Integer2ILP (1);
      ilptmp1267 = ILP_MakeInstance (Point2D);
      ilptmp1267->_content.asInstance.field[0] = ilptmp1268;
      ilptmp1267->_content.asInstance.field[1] = ilptmp1269;
      ilptmp1266 = ilptmp1267;
    }

    {
      ILP_Object pc5 = ilptmp1266;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_Object ilptmp1270;
	      {
		ILP_general_function ilptmp1271;
		ILP_Object ilptmp1272;
		ilptmp1272 = pc5;
		ilptmp1271 =
		  ILP_find_method (ilptmp1272, &ILP_object_print_method, 1);
		ilptmp1270 = ilptmp1271 (NULL, ilptmp1272);
	      }
	      ilptmp1270 = ILP_Integer2ILP (8491);
	      return ilptmp1270;
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
		  ILP_Object e6 = ILP_current_exception;
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
