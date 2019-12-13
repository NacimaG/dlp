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
ILP_Object ilp__m1_2 (ILP_Closure ilp_useless, ILP_Object self1);

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
     ilp__m1_2,
     }}}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    1,				/* arité */
    2				/* offset */
    }}
};

extern struct ILP_Class3 ILP_object_Point2D_class;
extern struct ILP_Field ILP_object_y_field;

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
     ilp__m1_2,
     }}}
};

extern struct ILP_Class3 ILP_object_Point3D_class;
extern struct ILP_Field ILP_object_z_field;
ILP_Object ilp__m1_4 (ILP_Closure ilp_useless, ILP_Object self3);

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
     ilp__m1_4,
     }}}
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
      ILP_Object ilptmp841;
      ilptmp841 = self1;
      if (ILP_IsA (ilptmp841, Point))
	{
	  return ilptmp841->_content.asInstance.field[0];
	}
      else
	{
	  return ILP_UnknownFieldError ("x", ilptmp841);
	}
    }
  }
}

ILP_Object
ilp__m1_4 (ILP_Closure ilp_useless, ILP_Object self3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_2;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self3;

  {
    {
      ILP_Object ilptmp842;
      ILP_Object ilptmp843;
      {
	ILP_Object ilptmp844;
	ilptmp844 = self3;
	if (ILP_IsA (ilptmp844, Point2D))
	  {
	    ilptmp842 = ilptmp844->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp842 = ILP_UnknownFieldError ("y", ilptmp844);
	  }
      }
      {
	ILP_Object ilptmp845;
	ILP_Object ilptmp846;
	{
	  ILP_Object ilptmp847;
	  ilptmp847 = self3;
	  if (ILP_IsA (ilptmp847, Point3D))
	    {
	      ilptmp845 = ilptmp847->_content.asInstance.field[2];
	    }
	  else
	    {
	      ilptmp845 = ILP_UnknownFieldError ("z", ilptmp847);
	    }
	}
	ilptmp846 = ILP_FindAndCallSuperMethod ();
	ilptmp843 = ILP_Times (ilptmp845, ilptmp846);
      }
      return ILP_Plus (ilptmp842, ilptmp843);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp848;
    {
      ILP_Object ilptmp849;
      ILP_Object ilptmp850;
      ILP_Object ilptmp851;
      ILP_Object ilptmp852;
      ilptmp850 = ILP_Integer2ILP (10);
      ilptmp851 = ILP_Integer2ILP (2);
      ilptmp852 = ILP_Integer2ILP (84);
      ilptmp849 = ILP_MakeInstance (Point3D);
      ilptmp849->_content.asInstance.field[0] = ilptmp850;
      ilptmp849->_content.asInstance.field[1] = ilptmp851;
      ilptmp849->_content.asInstance.field[2] = ilptmp852;
      ilptmp848 = ilptmp849;
    }

    {
      ILP_Object pc5 = ilptmp848;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_general_function ilptmp853;
	      ILP_Object ilptmp854;
	      ilptmp854 = pc5;
	      ilptmp853 =
		ILP_find_method (ilptmp854, &ILP_object_m1_method, 1);
	      return ilptmp853 (NULL, ilptmp854);
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
