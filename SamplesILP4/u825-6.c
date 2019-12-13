#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */

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

ILP_GenerateClass (5);
extern struct ILP_Class5 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__m2_8 (ILP_Closure ilp_useless, ILP_Object self7);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
  {{(ILP_Class) & ILP_object_PointColore_class,
    &ILP_object_y_field,
    "color",
    2}}
};

struct ILP_Class5 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Point_class,
    "PointColore",
    3,
    &ILP_object_color_field,
    5,
    {ILPm_print,
     ILPm_classOf,
     ilp__longueur_2,
     ilp__m1_6,
     ilp__m2_8,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "m2",
    1,				/* arité */
    4				/* offset */
    }}
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
      ILP_Object ilptmp496;
      ILP_Object ilptmp497;
      {
	ILP_Object ilptmp498;
	ilptmp498 = self1;
	if (ILP_IsA (ilptmp498, Point))
	  {
	    ilptmp496 = ilptmp498->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp496 = ILP_UnknownFieldError ("x", ilptmp498);
	  }
      }
      {
	ILP_Object ilptmp499;
	ilptmp499 = self1;
	if (ILP_IsA (ilptmp499, Point))
	  {
	    ilptmp497 = ilptmp499->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp497 = ILP_UnknownFieldError ("y", ilptmp499);
	  }
      }
      return ILP_Plus (ilptmp496, ilptmp497);
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
      ILP_Object ilptmp500;
      ILP_Object ilptmp501;
      {
	ILP_Object ilptmp502;
	ILP_Object ilptmp503;
	ilptmp502 = z4;
	{
	  ILP_Object ilptmp504;
	  ilptmp504 = self3;
	  if (ILP_IsA (ilptmp504, Point))
	    {
	      ilptmp503 = ilptmp504->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp503 = ILP_UnknownFieldError ("x", ilptmp504);
	    }
	}
	ilptmp500 = ILP_Times (ilptmp502, ilptmp503);
      }
      {
	ILP_Object ilptmp505;
	ILP_Object ilptmp506;
	ilptmp505 = t5;
	{
	  ILP_Object ilptmp507;
	  ilptmp507 = self3;
	  if (ILP_IsA (ilptmp507, Point))
	    {
	      ilptmp506 = ilptmp507->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp506 = ILP_UnknownFieldError ("y", ilptmp507);
	    }
	}
	ilptmp501 = ILP_Times (ilptmp505, ilptmp506);
      }
      return ILP_Plus (ilptmp500, ilptmp501);
    }
  }
}

ILP_Object
ilp__m2_8 (ILP_Closure ilp_useless, ILP_Object self7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self7;

  {
    return ILP_Integer2ILP (824);
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp508;
    {
      ILP_Object ilptmp509;
      ILP_Object ilptmp510;
      ILP_Object ilptmp511;
      ILP_Object ilptmp512;
      ilptmp510 = ILP_Integer2ILP (820);
      ilptmp511 = ILP_Integer2ILP (5);
      ilptmp512 = ILP_String2ILP ("red");
      ilptmp509 = ILP_MakeInstance (PointColore);
      ilptmp509->_content.asInstance.field[0] = ilptmp510;
      ilptmp509->_content.asInstance.field[1] = ilptmp511;
      ilptmp509->_content.asInstance.field[2] = ilptmp512;
      ilptmp508 = ilptmp509;
    }

    {
      ILP_Object pc9 = ilptmp508;
      {
	ILP_general_function ilptmp513;
	ILP_Object ilptmp514;
	ILP_Object ilptmp515;
	ILP_Object ilptmp516;
	ilptmp514 = pc9;
	ilptmp515 = ILP_Integer2ILP (1);
	ilptmp516 = ILP_Integer2ILP (1);
	ilptmp513 = ILP_find_method (ilptmp514, &ILP_object_m1_method, 3);
	return ilptmp513 (NULL, ilptmp514, ilptmp515, ilptmp516);
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
