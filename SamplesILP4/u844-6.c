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
		      ILP_Object u2, ILP_Object t3);

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
		      ILP_Object t6, ILP_Object u7);

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
	   ILP_Object self1, ILP_Object u2, ILP_Object t3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = u2;
  ilp_CurrentArguments[2] = t3;

  {
    {
      ILP_Object ilptmp916;
      ILP_Object ilptmp917;
      ilptmp916 = u2;
      {
	ILP_Object ilptmp918;
	ilptmp918 = self1;
	if (ILP_IsA (ilptmp918, Point))
	  {
	    ilptmp917 = ilptmp918->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp917 = ILP_UnknownFieldError ("x", ilptmp918);
	  }
      }
      return ILP_Times (ilptmp916, ilptmp917);
    }
  }
}

ILP_Object
ilp__m1_8 (ILP_Closure ilp_useless,
	   ILP_Object self5, ILP_Object t6, ILP_Object u7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_4;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self5;
  ilp_CurrentArguments[1] = t6;
  ilp_CurrentArguments[2] = u7;

  {
    {
      ILP_Object ilptmp919;
      ILP_Object ilptmp920;
      {
	ILP_Object ilptmp921;
	ILP_Object ilptmp922;
	ilptmp921 = u7;
	{
	  ILP_Object ilptmp923;
	  ilptmp923 = self5;
	  if (ILP_IsA (ilptmp923, Point2D))
	    {
	      ilptmp922 = ilptmp923->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp922 = ILP_UnknownFieldError ("y", ilptmp923);
	    }
	}
	ilptmp919 = ILP_Times (ilptmp921, ilptmp922);
      }
      ilptmp920 = ILP_FindAndCallSuperMethod ();
      return ILP_Plus (ilptmp919, ilptmp920);
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
      ILP_Object ilptmp924;
      ILP_Object ilptmp925;
      {
	ILP_Object ilptmp926;
	ilptmp926 = self9;
	if (ILP_IsA (ilptmp926, Point3D))
	  {
	    ilptmp924 = ilptmp926->_content.asInstance.field[2];
	  }
	else
	  {
	    ilptmp924 = ILP_UnknownFieldError ("z", ilptmp926);
	  }
      }
      ilptmp925 = ILP_FindAndCallSuperMethod ();
      return ILP_Plus (ilptmp924, ilptmp925);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp927;
    {
      ILP_Object ilptmp928;
      ILP_Object ilptmp929;
      ILP_Object ilptmp930;
      ILP_Object ilptmp931;
      ilptmp929 = ILP_Integer2ILP (400);
      ilptmp930 = ILP_Integer2ILP (10);
      ilptmp931 = ILP_Integer2ILP (14);
      ilptmp928 = ILP_MakeInstance (Point3D);
      ilptmp928->_content.asInstance.field[0] = ilptmp929;
      ilptmp928->_content.asInstance.field[1] = ilptmp930;
      ilptmp928->_content.asInstance.field[2] = ilptmp931;
      ilptmp927 = ilptmp928;
    }

    {
      ILP_Object pc13 = ilptmp927;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_general_function ilptmp932;
	      ILP_Object ilptmp933;
	      ILP_Object ilptmp934;
	      ILP_Object ilptmp935;
	      ilptmp933 = pc13;
	      ilptmp934 = ILP_Integer2ILP (2);
	      ilptmp935 = ILP_Integer2ILP (3);
	      ilptmp932 =
		ILP_find_method (ilptmp933, &ILP_object_m1_method, 3);
	      return ilptmp932 (NULL, ilptmp933, ilptmp934, ilptmp935);
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
