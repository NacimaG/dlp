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
ILP_Object ilp__m2_9 (ILP_Closure ilp_useless, ILP_Object self7,
		      ILP_Object x8);

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
     ilp__m2_9,
     }}}
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  {{(struct ILP_Class *) &ILP_object_PointColore_class,
    "m2",
    2,				/* arité */
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
      ILP_Object ilptmp453;
      ILP_Object ilptmp454;
      {
	ILP_Object ilptmp455;
	ilptmp455 = self1;
	if (ILP_IsA (ilptmp455, Point))
	  {
	    ilptmp453 = ilptmp455->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp453 = ILP_UnknownFieldError ("x", ilptmp455);
	  }
      }
      {
	ILP_Object ilptmp456;
	ilptmp456 = self1;
	if (ILP_IsA (ilptmp456, Point))
	  {
	    ilptmp454 = ilptmp456->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp454 = ILP_UnknownFieldError ("y", ilptmp456);
	  }
      }
      return ILP_Plus (ilptmp453, ilptmp454);
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
      ILP_Object ilptmp457;
      ILP_Object ilptmp458;
      {
	ILP_Object ilptmp459;
	ILP_Object ilptmp460;
	ilptmp459 = z4;
	{
	  ILP_Object ilptmp461;
	  ilptmp461 = self3;
	  if (ILP_IsA (ilptmp461, Point))
	    {
	      ilptmp460 = ilptmp461->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp460 = ILP_UnknownFieldError ("x", ilptmp461);
	    }
	}
	ilptmp457 = ILP_Times (ilptmp459, ilptmp460);
      }
      {
	ILP_Object ilptmp462;
	ILP_Object ilptmp463;
	ilptmp462 = t5;
	{
	  ILP_Object ilptmp464;
	  ilptmp464 = self3;
	  if (ILP_IsA (ilptmp464, Point))
	    {
	      ilptmp463 = ilptmp464->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp463 = ILP_UnknownFieldError ("y", ilptmp464);
	    }
	}
	ilptmp458 = ILP_Times (ilptmp462, ilptmp463);
      }
      return ILP_Plus (ilptmp457, ilptmp458);
    }
  }
}

ILP_Object
ilp__m2_9 (ILP_Closure ilp_useless, ILP_Object self7, ILP_Object x8)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
  static ILP_general_function ilp_SuperMethod = NULL;
  ILP_Object ilp_CurrentArguments[2];
  ilp_CurrentArguments[0] = self7;
  ilp_CurrentArguments[1] = x8;

  {
    {
      ILP_Object ilptmp465;
      ILP_Object ilptmp466;
      ilptmp465 = ILP_Integer2ILP (823);
      ilptmp466 = x8;
      return ILP_Plus (ilptmp465, ilptmp466);
    }
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp467;
    {
      ILP_Object ilptmp468;
      ILP_Object ilptmp469;
      ILP_Object ilptmp470;
      ILP_Object ilptmp471;
      ilptmp469 = ILP_Integer2ILP (11);
      ilptmp470 = ILP_Integer2ILP (22);
      ilptmp471 = ILP_String2ILP ("red");
      ilptmp468 = ILP_MakeInstance (PointColore);
      ilptmp468->_content.asInstance.field[0] = ilptmp469;
      ilptmp468->_content.asInstance.field[1] = ilptmp470;
      ilptmp468->_content.asInstance.field[2] = ilptmp471;
      ilptmp467 = ilptmp468;
    }

    {
      ILP_Object pc10 = ilptmp467;
      {
	ILP_general_function ilptmp472;
	ILP_Object ilptmp473;
	ILP_Object ilptmp474;
	ilptmp473 = pc10;
	ilptmp474 = ILP_Integer2ILP (1);
	ilptmp472 = ILP_find_method (ilptmp473, &ILP_object_m2_method, 2);
	return ilptmp472 (NULL, ilptmp473, ilptmp474);
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
