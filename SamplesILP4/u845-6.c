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
ILP_Object ilp__m1_4 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object tt2, ILP_Object uu3);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point_class,
    NULL,
    "x",
    0}}
};

struct ILP_Class3 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    1,
    &ILP_object_x_field,
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

extern struct ILP_Class3 ILP_object_Point2D_class;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__m1_8 (ILP_Closure ilp_useless, ILP_Object self5,
		      ILP_Object ttt6, ILP_Object uuu7);

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point2D_class,
    &ILP_object_x_field,
    "y",
    1}}
};

struct ILP_Class3 ILP_object_Point2D_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "Point2D",
    2,
    &ILP_object_y_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_8,
     }}}
};

extern struct ILP_Class3 ILP_object_Point3D_class;
extern struct ILP_Field ILP_object_z_field;
ILP_Object ilp__m1_12 (ILP_Closure ilp_useless, ILP_Object self9,
		       ILP_Object t10, ILP_Object u11);

struct ILP_Field ILP_object_z_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_Point3D_class,
    &ILP_object_y_field,
    "z",
    2}}
};

struct ILP_Class3 ILP_object_Point3D_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point2D_class,
    "Point3D",
    3,
    &ILP_object_z_field,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__m1_12,
     }}}
};

ILP_Object
ilp__m1_4 (ILP_Closure ilp_useless,
	   ILP_Object self1, ILP_Object tt2, ILP_Object uu3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = tt2;
  ilp_CurrentArguments[2] = uu3;

  {
    {
      ILP_Object ilptmp956;
      ILP_Object ilptmp957;
      ilptmp956 = tt2;
      {
	ILP_Object ilptmp958;
	ilptmp958 = self1;
	if (ILP_IsA (ilptmp958, Point))
	  {
	    ilptmp957 = ilptmp958->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp957 = ILP_UnknownFieldError ("x", ilptmp958);
	  }
      }
      return ILP_Times (ilptmp956, ilptmp957);
    }
  }
}

ILP_Object
ilp__m1_8 (ILP_Closure ilp_useless,
	   ILP_Object self5, ILP_Object ttt6, ILP_Object uuu7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_4;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self5;
  ilp_CurrentArguments[1] = ttt6;
  ilp_CurrentArguments[2] = uuu7;

  {
    {
      ILP_Object ilptmp959;
      ILP_Object ilptmp960;
      {
	ILP_Object ilptmp961;
	ILP_Object ilptmp962;
	ilptmp961 = uuu7;
	{
	  ILP_Object ilptmp963;
	  ilptmp963 = self5;
	  if (ILP_IsA (ilptmp963, Point2D))
	    {
	      ilptmp962 = ilptmp963->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp962 = ILP_UnknownFieldError ("y", ilptmp963);
	    }
	}
	ilptmp959 = ILP_Times (ilptmp961, ilptmp962);
      }
      ilptmp960 = ILP_FindAndCallSuperMethod ();
      return ILP_Plus (ilptmp959, ilptmp960);
    }
  }
}

ILP_Object
ilp__m1_12 (ILP_Closure ilp_useless,
	    ILP_Object self9, ILP_Object t10, ILP_Object u11)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_8;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self9;
  ilp_CurrentArguments[1] = t10;
  ilp_CurrentArguments[2] = u11;

  {
    {
      ILP_Object ilptmp964;
      ILP_Object ilptmp965;
      {
	ILP_Object ilptmp966;
	ilptmp966 = self9;
	if (ILP_IsA (ilptmp966, Point3D))
	  {
	    ilptmp964 = ilptmp966->_content.asInstance.field[2];
	  }
	else
	  {
	    ilptmp964 = ILP_UnknownFieldError ("z", ilptmp966);
	  }
      }
      ilptmp965 = ILP_FindAndCallSuperMethod ();
      return ILP_Plus (ilptmp964, ilptmp965);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp967;
    {
      ILP_Object ilptmp968;
      ILP_Object ilptmp969;
      ILP_Object ilptmp970;
      ILP_Object ilptmp971;
      ilptmp969 = ILP_Integer2ILP (400);
      ilptmp970 = ILP_Integer2ILP (10);
      ilptmp971 = ILP_Integer2ILP (15);
      ilptmp968 = ILP_MakeInstance (Point3D);
      ilptmp968->_content.asInstance.field[0] = ilptmp969;
      ilptmp968->_content.asInstance.field[1] = ilptmp970;
      ilptmp968->_content.asInstance.field[2] = ilptmp971;
      ilptmp967 = ilptmp968;
    }

    {
      ILP_Object pc13 = ilptmp967;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_general_function ilptmp972;
	      ILP_Object ilptmp973;
	      ILP_Object ilptmp974;
	      ILP_Object ilptmp975;
	      ilptmp973 = pc13;
	      ilptmp974 = ILP_Integer2ILP (2);
	      ilptmp975 = ILP_Integer2ILP (3);
	      ilptmp972 =
		ILP_find_method (ilptmp973, &ILP_object_m1_method, 3);
	      return ilptmp972 (NULL, ilptmp973, ilptmp974, ilptmp975);
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
		  ILP_Object e14 = ILP_current_exception;
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
