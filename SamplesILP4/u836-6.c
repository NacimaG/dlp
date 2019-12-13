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
ILP_Object ilp__x_2 (ILP_Closure ilp_useless, ILP_Object self1);

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
     ilp__x_2,
     }}}
};

struct ILP_Method ILP_object_x_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "x",
    1,				/* arité */
    2				/* offset */
    }}
};

ILP_GenerateClass (4);
extern struct ILP_Class4 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__color1_4 (ILP_Closure ilp_useless, ILP_Object self3);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointColore_class,
    &ILP_object_y_field,
    "color",
    2}}
};

struct ILP_Class4 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointColore",
    3,
    &ILP_object_color_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__x_2,
     ilp__color1_4,
     }}}
};

struct ILP_Method ILP_object_color1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "color1",
    1,				/* arité */
    3				/* offset */
    }}
};

extern struct ILP_Class4 ILP_object_PointLarge_class;
extern struct ILP_Field ILP_object_taille_field;
ILP_Object ilp__color2_6 (ILP_Closure ilp_useless, ILP_Object self5);

struct ILP_Field ILP_object_taille_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointLarge_class,
    &ILP_object_y_field,
    "taille",
    2}}
};

struct ILP_Class4 ILP_object_PointLarge_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointLarge",
    3,
    &ILP_object_taille_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__x_2,
     ilp__color2_6,
     }}}
};

struct ILP_Method ILP_object_color2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointLarge_class,
    "color2",
    1,				/* arité */
    3				/* offset */
    }}
};

ILP_Object
ilp__x_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_x_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp761;
      ilptmp761 = self1;
      if (ILP_IsA (ilptmp761, Point))
	{
	  return ilptmp761->_content.asInstance.field[0];
	}
      else
	{
	  return ILP_UnknownFieldError ("x", ilptmp761);
	}
    }
  }
}

ILP_Object
ilp__color1_4 (ILP_Closure ilp_useless, ILP_Object self3)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_color1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self3;

  {
    {
      ILP_Object ilptmp762;
      ilptmp762 = self3;
      if (ILP_IsA (ilptmp762, PointColore))
	{
	  return ilptmp762->_content.asInstance.field[2];
	}
      else
	{
	  return ILP_UnknownFieldError ("color", ilptmp762);
	}
    }
  }
}

ILP_Object
ilp__color2_6 (ILP_Closure ilp_useless, ILP_Object self5)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_color2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self5;

  {
    {
      ILP_Object ilptmp763;
      ilptmp763 = self5;
      if (ILP_IsA (ilptmp763, PointLarge))
	{
	  return ilptmp763->_content.asInstance.field[2];
	}
      else
	{
	  return ILP_UnknownFieldError ("taille", ilptmp763);
	}
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp764;
    ILP_Object ilptmp765;
    {
      ILP_Object ilptmp766;
      ILP_Object ilptmp767;
      ILP_Object ilptmp768;
      ILP_Object ilptmp769;
      ilptmp767 = ILP_Integer2ILP (11);
      ilptmp768 = ILP_Integer2ILP (22);
      ilptmp769 = ILP_String2ILP ("red");
      ilptmp766 = ILP_MakeInstance (PointColore);
      ilptmp766->_content.asInstance.field[0] = ilptmp767;
      ilptmp766->_content.asInstance.field[1] = ilptmp768;
      ilptmp766->_content.asInstance.field[2] = ilptmp769;
      ilptmp764 = ilptmp766;
    }
    {
      ILP_Object ilptmp770;
      ILP_Object ilptmp771;
      ILP_Object ilptmp772;
      ILP_Object ilptmp773;
      ilptmp771 = ILP_Integer2ILP (33);
      ilptmp772 = ILP_Integer2ILP (44);
      ilptmp773 = ILP_Integer2ILP (835);
      ilptmp770 = ILP_MakeInstance (PointLarge);
      ilptmp770->_content.asInstance.field[0] = ilptmp771;
      ilptmp770->_content.asInstance.field[1] = ilptmp772;
      ilptmp770->_content.asInstance.field[2] = ilptmp773;
      ilptmp765 = ilptmp770;
    }

    {
      ILP_Object pc7 = ilptmp764;
      ILP_Object pl8 = ilptmp765;
      {
	ILP_Object ilptmp774;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_general_function ilptmp775;
		ILP_Object ilptmp776;
		ilptmp776 = pc7;
		ilptmp775 =
		  ILP_find_method (ilptmp776, &ILP_object_color2_method, 1);
		ilptmp774 = ilptmp775 (NULL, ilptmp776);
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
		    ILP_Object e9 = ILP_current_exception;
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
	  ilptmp774 = ILP_FALSE;
	}
	ilptmp774 = ILP_Integer2ILP (836);
	return ilptmp774;
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
