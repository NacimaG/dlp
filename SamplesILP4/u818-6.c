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
ILP_Object ilp__m2_3 (ILP_Closure ilp_useless, ILP_Object self1,
		      ILP_Object u2);
ILP_Object ilp__m1_7 (ILP_Closure ilp_useless, ILP_Object self4,
		      ILP_Object z5, ILP_Object t6);

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
     ilp__m2_3,
     ilp__m1_7,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Point_class,
    "m2",
    2,				/* arité */
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
ilp__m2_3 (ILP_Closure ilp_useless, ILP_Object self1, ILP_Object u2)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self1;
  ilp_CurrentArguments[1] = u2;

  {
    {
      ILP_Object ilptmp228;
      ILP_Object ilptmp229;
      {
	ILP_general_function ilptmp230;
	ILP_Object ilptmp231;
	ILP_Object ilptmp232;
	ILP_Object ilptmp233;
	ilptmp231 = self1;
	ilptmp232 = u2;
	ilptmp233 = u2;
	ilptmp230 = ILP_find_method (ilptmp231, &ILP_object_m1_method, 3);
	ilptmp228 = ilptmp230 (NULL, ilptmp231, ilptmp232, ilptmp233);
      }
      ilptmp229 = ILP_Integer2ILP (1);
      return ILP_Plus (ilptmp228, ilptmp229);
    }
  }
}

ILP_Object
ilp__m1_7 (ILP_Closure ilp_useless,
	   ILP_Object self4, ILP_Object z5, ILP_Object t6)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[3];
  ilp_CurrentArguments[0] = self4;
  ilp_CurrentArguments[1] = z5;
  ilp_CurrentArguments[2] = t6;

  {
    {
      ILP_Object ilptmp234;
      ILP_Object ilptmp235;
      {
	ILP_Object ilptmp236;
	ILP_Object ilptmp237;
	ilptmp236 = z5;
	{
	  ILP_Object ilptmp238;
	  ilptmp238 = self4;
	  if (ILP_IsA (ilptmp238, Point))
	    {
	      ilptmp237 = ilptmp238->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp237 = ILP_UnknownFieldError ("x", ilptmp238);
	    }
	}
	ilptmp234 = ILP_Times (ilptmp236, ilptmp237);
      }
      {
	ILP_Object ilptmp239;
	ILP_Object ilptmp240;
	ilptmp239 = t6;
	{
	  ILP_Object ilptmp241;
	  ilptmp241 = self4;
	  if (ILP_IsA (ilptmp241, Point))
	    {
	      ilptmp240 = ilptmp241->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp240 = ILP_UnknownFieldError ("y", ilptmp241);
	    }
	}
	ilptmp235 = ILP_Times (ilptmp239, ilptmp240);
      }
      return ILP_Plus (ilptmp234, ilptmp235);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp242;
    {
      ILP_Object ilptmp243;
      ILP_Object ilptmp244;
      ILP_Object ilptmp245;
      ilptmp244 = ILP_Integer2ILP (3);
      ilptmp245 = ILP_Integer2ILP (4);
      ilptmp243 = ILP_MakeInstance (Point);
      ilptmp243->_content.asInstance.field[0] = ilptmp244;
      ilptmp243->_content.asInstance.field[1] = ilptmp245;
      ilptmp242 = ilptmp243;
    }

    {
      ILP_Object point8 = ilptmp242;
      {
	ILP_general_function ilptmp246;
	ILP_Object ilptmp247;
	ILP_Object ilptmp248;
	ilptmp247 = point8;
	ilptmp248 = ILP_Integer2ILP (2);
	ilptmp246 = ILP_find_method (ilptmp247, &ILP_object_m2_method, 2);
	return ilptmp246 (NULL, ilptmp247, ilptmp248);
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
