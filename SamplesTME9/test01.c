#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object p;
ILP_Object Point;

/* Global prototypes */

/* Global functions */


/* Classes */
ILP_GenerateClass (4);
extern struct ILP_Class4 ILP_object_Point_class;
extern struct ILP_Field ILP_object_x_field;
extern struct ILP_Field ILP_object_y_field;
ILP_Object ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1);
ILP_Object ilp__m1_6 (ILP_Closure ilp_useless, ILP_Object self3,
		      ILP_Object z4, ILP_Object t5);

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

struct ILP_Class4 ILP_object_Point_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Point",
    2,
    &ILP_object_y_field,
    4,
    {ILPm_print,
     ILPm_classOf,
     ilp__longueur_2,
     ilp__m1_6,
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

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m1",
    3,				/* arité */
    3				/* offset */
    }}
};

extern struct ILP_Class4 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;

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
     ilp__longueur_2,
     ilp__m1_6,
     }}}
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
      ILP_Object ilptmp1;
      ILP_Object ilptmp2;
      {
	ILP_Object ilptmp3;
	ilptmp3 = self1;
	if (ILP_IsA (ilptmp3, Point))
	  {
	    ilptmp1 = ilptmp3->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp1 = ILP_UnknownFieldError ("x", ilptmp3);
	  }
      }
      {
	ILP_Object ilptmp4;
	ilptmp4 = self1;
	if (ILP_IsA (ilptmp4, Point))
	  {
	    ilptmp2 = ilptmp4->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp2 = ILP_UnknownFieldError ("y", ilptmp4);
	  }
      }
      return ILP_Plus (ilptmp1, ilptmp2);
    }
  }
}

ILP_Object
ilp__m1_6 (ILP_Closure ilp_useless,
	   ILP_Object self3, ILP_Object z4, ILP_Object t5)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self3;
  ilp_CurrentArguments[1] = z4;
  ilp_CurrentArguments[2] = t5;

  {
    {
      ILP_Object ilptmp5;
      ILP_Object ilptmp6;
      {
	ILP_Object ilptmp7;
	ILP_Object ilptmp8;
	ilptmp7 = z4;
	{
	  ILP_Object ilptmp9;
	  ilptmp9 = self3;
	  if (ILP_IsA (ilptmp9, Point))
	    {
	      ilptmp8 = ilptmp9->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp8 = ILP_UnknownFieldError ("x", ilptmp9);
	    }
	}
	ilptmp5 = ILP_Times (ilptmp7, ilptmp8);
      }
      {
	ILP_Object ilptmp10;
	ILP_Object ilptmp11;
	ilptmp10 = t5;
	{
	  ILP_Object ilptmp12;
	  ilptmp12 = self3;
	  if (ILP_IsA (ilptmp12, Point))
	    {
	      ilptmp11 = ilptmp12->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp11 = ILP_UnknownFieldError ("y", ilptmp12);
	    }
	}
	ilptmp6 = ILP_Times (ilptmp10, ilptmp11);
      }
      return ILP_Plus (ilptmp5, ilptmp6);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp13;
    ilptmp13 = Point;
    {
      ILP_Object ilptmp14;
      {
	ILP_Object ilptmp15;
	ILP_Object ilptmp16;
	ILP_Object ilptmp17;
	ILP_Object ilptmp18;
	ilptmp16 = ILP_Integer2ILP (11);
	ilptmp17 = ILP_Integer2ILP (22);
	ilptmp18 = ILP_String2ILP ("red");
	ilptmp15 = ILP_MakeInstance (PointColore);
	ilptmp15->_content.asInstance.field[0] = ilptmp16;
	ilptmp15->_content.asInstance.field[1] = ilptmp17;
	ilptmp15->_content.asInstance.field[2] = ilptmp18;
	ilptmp14 = ilptmp15;
      }
      ilptmp13 = (p = ilptmp14);
    }
    {
      ILP_general_function ilptmp19;
      ILP_Object ilptmp20;
      ilptmp20 = p;
      ilptmp19 =
	ILP_find_method_global_cache (ilptmp20, &ILP_object_longueur_method,
				      1);
      ilptmp13 = ilptmp19 (NULL, ilptmp20);
    }
    return ilptmp13;
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
