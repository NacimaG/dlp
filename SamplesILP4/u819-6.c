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

ILP_GenerateClass (3);
extern struct ILP_Class3 ILP_object_Truc_class;
ILP_Object ilp__nexistePas_9 (ILP_Closure ilp_useless, ILP_Object self7,
			      ILP_Object x8);

struct ILP_Class3 ILP_object_Truc_class = {
  &ILP_object_Class_class,
  {{(ILP_Class) & ILP_object_Object_class,
    "Truc",
    0,
    NULL,
    3,
    {ILPm_print,
     ILPm_classOf,
     ilp__nexistePas_9,
     }}}
};

struct ILP_Method ILP_object_nexistePas_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_Truc_class,
    "nexistePas",
    2,				/* arité */
    2				/* offset */
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
      ILP_Object ilptmp269;
      ILP_Object ilptmp270;
      {
	ILP_Object ilptmp271;
	ilptmp271 = self1;
	if (ILP_IsA (ilptmp271, Point))
	  {
	    ilptmp269 = ilptmp271->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp269 = ILP_UnknownFieldError ("x", ilptmp271);
	  }
      }
      {
	ILP_Object ilptmp272;
	ilptmp272 = self1;
	if (ILP_IsA (ilptmp272, Point))
	  {
	    ilptmp270 = ilptmp272->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp270 = ILP_UnknownFieldError ("y", ilptmp272);
	  }
      }
      return ILP_Plus (ilptmp269, ilptmp270);
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
      ILP_Object ilptmp273;
      ILP_Object ilptmp274;
      {
	ILP_Object ilptmp275;
	ILP_Object ilptmp276;
	ilptmp275 = z4;
	{
	  ILP_Object ilptmp277;
	  ilptmp277 = self3;
	  if (ILP_IsA (ilptmp277, Point))
	    {
	      ilptmp276 = ilptmp277->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp276 = ILP_UnknownFieldError ("x", ilptmp277);
	    }
	}
	ilptmp273 = ILP_Times (ilptmp275, ilptmp276);
      }
      {
	ILP_Object ilptmp278;
	ILP_Object ilptmp279;
	ilptmp278 = t5;
	{
	  ILP_Object ilptmp280;
	  ilptmp280 = self3;
	  if (ILP_IsA (ilptmp280, Point))
	    {
	      ilptmp279 = ilptmp280->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp279 = ILP_UnknownFieldError ("y", ilptmp280);
	    }
	}
	ilptmp274 = ILP_Times (ilptmp278, ilptmp279);
      }
      return ILP_Plus (ilptmp273, ilptmp274);
    }
  }
}

ILP_Object
ilp__nexistePas_9 (ILP_Closure ilp_useless, ILP_Object self7, ILP_Object x8)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_nexistePas_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self7;
  ilp_CurrentArguments[1] = x8;

  {
    return x8;
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp281;
    {
      ILP_Object ilptmp282;
      ILP_Object ilptmp283;
      ILP_Object ilptmp284;
      ilptmp283 = ILP_Integer2ILP (2);
      ilptmp284 = ILP_Integer2ILP (3);
      ilptmp282 = ILP_MakeInstance (Point);
      ilptmp282->_content.asInstance.field[0] = ilptmp283;
      ilptmp282->_content.asInstance.field[1] = ilptmp284;
      ilptmp281 = ilptmp282;
    }

    {
      ILP_Object point10 = ilptmp281;
      {
	ILP_Object ilptmp285;
	{
	  struct ILP_catcher *current_catcher = ILP_current_catcher;
	  struct ILP_catcher new_catcher;
	  if (0 == setjmp (new_catcher._jmp_buf))
	    {
	      ILP_establish_catcher (&new_catcher);
	      {
		ILP_general_function ilptmp286;
		ILP_Object ilptmp287;
		ILP_Object ilptmp288;
		ilptmp287 = point10;
		ilptmp288 = ILP_Integer2ILP (23);
		ilptmp286 =
		  ILP_find_method (ilptmp287, &ILP_object_nexistePas_method,
				   2);
		ilptmp285 = ilptmp286 (NULL, ilptmp287, ilptmp288);
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
		    ILP_Object e11 = ILP_current_exception;
		    ILP_current_exception = NULL;
		    (void) ILP_TRUE;
		  }
		};
	    };
	  ILP_reset_catcher (current_catcher);
	  if (NULL != ILP_current_exception)
	    {
	      ILP_throw (ILP_current_exception);
	    };
	  ilptmp285 = ILP_FALSE;
	}
	ilptmp285 = ILP_Integer2ILP (819);
	return ilptmp285;
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
