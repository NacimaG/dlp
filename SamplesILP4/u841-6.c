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
ILP_Object ilp__m1_3 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object t2);

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
     ilp__m1_3,
     }}}
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    2,				/* arité */
    2				/* offset */
    }}
};

extern struct ILP_Class3 ILP_object_Point2D_class;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__m1_6 (ILP_Closure ilp_useless, ILP_Object self4,
		      ILP_Object t5);

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
     ilp__m1_6,
     }}}
};

ILP_Object
ilp__m1_3 (ILP_Closure ilp_useless, ILP_Object self1, ILP_Object t2)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = t2;

  {
    {
      ILP_Object ilptmp812;
      ILP_Object ilptmp813;
      {
	ILP_Object ilptmp814;
	ilptmp814 = self1;
	if (ILP_IsA (ilptmp814, Point))
	  {
	    ilptmp812 = ilptmp814->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp812 = ILP_UnknownFieldError ("x", ilptmp814);
	  }
      }
      ilptmp813 = t2;
      return ILP_Times (ilptmp812, ilptmp813);
    }
  }
}

ILP_Object
ilp__m1_6 (ILP_Closure ilp_useless, ILP_Object self4, ILP_Object t5)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = ilp__m1_3;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self4;
  ilp_CurrentArguments[1] = t5;

  {
    {
      ILP_Object ilptmp815;
      ILP_Object ilptmp816;
      {
	ILP_Object ilptmp817;
	ilptmp817 = self4;
	if (ILP_IsA (ilptmp817, Point2D))
	  {
	    ilptmp815 = ilptmp817->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp815 = ILP_UnknownFieldError ("y", ilptmp817);
	  }
      }
      ilptmp816 = ILP_FindAndCallSuperMethod ();
      return ILP_Times (ilptmp815, ilptmp816);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp818;
    {
      ILP_Object ilptmp819;
      ILP_Object ilptmp820;
      ILP_Object ilptmp821;
      ilptmp820 = ILP_Integer2ILP (10);
      ilptmp821 = ILP_Integer2ILP (42);
      ilptmp819 = ILP_MakeInstance (Point2D);
      ilptmp819->_content.asInstance.field[0] = ilptmp820;
      ilptmp819->_content.asInstance.field[1] = ilptmp821;
      ilptmp818 = ilptmp819;
    }

    {
      ILP_Object pc7 = ilptmp818;
      {
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;
	if (0 == setjmp (new_catcher._jmp_buf))
	  {
	    ILP_establish_catcher (&new_catcher);
	    {
	      ILP_Object ilptmp822;
	      ILP_Object ilptmp823;
	      ilptmp822 = ILP_Integer2ILP (1);
	      {
		ILP_general_function ilptmp824;
		ILP_Object ilptmp825;
		ILP_Object ilptmp826;
		ilptmp825 = pc7;
		ilptmp826 = ILP_Integer2ILP (2);
		ilptmp824 =
		  ILP_find_method (ilptmp825, &ILP_object_m1_method, 2);
		ilptmp823 = ilptmp824 (NULL, ilptmp825, ilptmp826);
	      }
	      return ILP_Plus (ilptmp822, ilptmp823);
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
		  ILP_Object e8 = ILP_current_exception;
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
