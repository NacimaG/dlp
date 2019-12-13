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

ILP_Object
ilp__longueur_2 (ILP_Closure ilp_useless, ILP_Object self1)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self1;

  {
    {
      ILP_Object ilptmp185;
      ILP_Object ilptmp186;
      {
	ILP_Object ilptmp187;
	ilptmp187 = self1;
	if (ILP_IsA (ilptmp187, Point))
	  {
	    ilptmp185 = ilptmp187->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp185 = ILP_UnknownFieldError ("x", ilptmp187);
	  }
      }
      {
	ILP_Object ilptmp188;
	ilptmp188 = self1;
	if (ILP_IsA (ilptmp188, Point))
	  {
	    ilptmp186 = ilptmp188->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp186 = ILP_UnknownFieldError ("y", ilptmp188);
	  }
      }
      return ILP_Plus (ilptmp185, ilptmp186);
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
      ILP_Object ilptmp189;
      ILP_Object ilptmp190;
      {
	ILP_Object ilptmp191;
	ILP_Object ilptmp192;
	ilptmp191 = z4;
	{
	  ILP_Object ilptmp193;
	  ilptmp193 = self3;
	  if (ILP_IsA (ilptmp193, Point))
	    {
	      ilptmp192 = ilptmp193->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp192 = ILP_UnknownFieldError ("x", ilptmp193);
	    }
	}
	ilptmp189 = ILP_Times (ilptmp191, ilptmp192);
      }
      {
	ILP_Object ilptmp194;
	ILP_Object ilptmp195;
	ilptmp194 = t5;
	{
	  ILP_Object ilptmp196;
	  ilptmp196 = self3;
	  if (ILP_IsA (ilptmp196, Point))
	    {
	      ilptmp195 = ilptmp196->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp195 = ILP_UnknownFieldError ("y", ilptmp196);
	    }
	}
	ilptmp190 = ILP_Times (ilptmp194, ilptmp195);
      }
      return ILP_Plus (ilptmp189, ilptmp190);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp197;
    {
      ILP_Object ilptmp198;
      ILP_Object ilptmp199;
      ILP_Object ilptmp200;
      ilptmp199 = ILP_Integer2ILP (2);
      ilptmp200 = ILP_Integer2ILP (3);
      ilptmp198 = ILP_MakeInstance (Point);
      ilptmp198->_content.asInstance.field[0] = ilptmp199;
      ilptmp198->_content.asInstance.field[1] = ilptmp200;
      ilptmp197 = ilptmp198;
    }

    {
      ILP_Object point7 = ilptmp197;
      {
	ILP_general_function ilptmp201;
	ILP_Object ilptmp202;
	ILP_Object ilptmp203;
	ILP_Object ilptmp204;
	ilptmp202 = point7;
	ilptmp203 = ILP_Integer2ILP (2);
	{
	  ILP_general_function ilptmp205;
	  ILP_Object ilptmp206;
	  ilptmp206 = point7;
	  ilptmp205 =
	    ILP_find_method (ilptmp206, &ILP_object_longueur_method, 1);
	  ilptmp204 = ilptmp205 (NULL, ilptmp206);
	}
	ilptmp201 = ILP_find_method (ilptmp202, &ILP_object_m1_method, 3);
	return ilptmp201 (NULL, ilptmp202, ilptmp203, ilptmp204);
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
