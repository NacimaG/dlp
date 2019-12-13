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

extern struct ILP_Class4 ILP_object_PointColore_class;
extern struct ILP_Field ILP_object_color_field;
ILP_Object ilp__longueur_8 (ILP_Closure ilp_useless, ILP_Object self7);

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
     ilp__longueur_8,
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
      ILP_Object ilptmp536;
      ILP_Object ilptmp537;
      {
	ILP_Object ilptmp538;
	ilptmp538 = self1;
	if (ILP_IsA (ilptmp538, Point))
	  {
	    ilptmp536 = ilptmp538->_content.asInstance.field[0];
	  }
	else
	  {
	    ilptmp536 = ILP_UnknownFieldError ("x", ilptmp538);
	  }
      }
      {
	ILP_Object ilptmp539;
	ilptmp539 = self1;
	if (ILP_IsA (ilptmp539, Point))
	  {
	    ilptmp537 = ilptmp539->_content.asInstance.field[1];
	  }
	else
	  {
	    ilptmp537 = ILP_UnknownFieldError ("y", ilptmp539);
	  }
      }
      return ILP_Plus (ilptmp536, ilptmp537);
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
      ILP_Object ilptmp540;
      ILP_Object ilptmp541;
      {
	ILP_Object ilptmp542;
	ILP_Object ilptmp543;
	ilptmp542 = z4;
	{
	  ILP_Object ilptmp544;
	  ilptmp544 = self3;
	  if (ILP_IsA (ilptmp544, Point))
	    {
	      ilptmp543 = ilptmp544->_content.asInstance.field[0];
	    }
	  else
	    {
	      ilptmp543 = ILP_UnknownFieldError ("x", ilptmp544);
	    }
	}
	ilptmp540 = ILP_Times (ilptmp542, ilptmp543);
      }
      {
	ILP_Object ilptmp545;
	ILP_Object ilptmp546;
	ilptmp545 = t5;
	{
	  ILP_Object ilptmp547;
	  ilptmp547 = self3;
	  if (ILP_IsA (ilptmp547, Point))
	    {
	      ilptmp546 = ilptmp547->_content.asInstance.field[1];
	    }
	  else
	    {
	      ilptmp546 = ILP_UnknownFieldError ("y", ilptmp547);
	    }
	}
	ilptmp541 = ILP_Times (ilptmp545, ilptmp546);
      }
      return ILP_Plus (ilptmp540, ilptmp541);
    }
  }
}

ILP_Object
ilp__longueur_8 (ILP_Closure ilp_useless, ILP_Object self7)
{
  static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
  static ILP_general_function ilp_SuperMethod = ilp__longueur_2;
  ILP_Object ilp_CurrentArguments[1];
  ilp_CurrentArguments[0] = self7;

  {
    return ILP_Integer2ILP (826);
  }
}


ILP_Object
ilp_program ()
{
  {
    ILP_Object ilptmp548;
    {
      ILP_Object ilptmp549;
      ILP_Object ilptmp550;
      ILP_Object ilptmp551;
      ILP_Object ilptmp552;
      ilptmp550 = ILP_Integer2ILP (11);
      ilptmp551 = ILP_Integer2ILP (22);
      ilptmp552 = ILP_String2ILP ("red");
      ilptmp549 = ILP_MakeInstance (PointColore);
      ilptmp549->_content.asInstance.field[0] = ilptmp550;
      ilptmp549->_content.asInstance.field[1] = ilptmp551;
      ilptmp549->_content.asInstance.field[2] = ilptmp552;
      ilptmp548 = ilptmp549;
    }

    {
      ILP_Object pc9 = ilptmp548;
      {
	ILP_general_function ilptmp553;
	ILP_Object ilptmp554;
	ilptmp554 = pc9;
	ilptmp553 =
	  ILP_find_method (ilptmp554, &ILP_object_longueur_method, 1);
	return ilptmp553 (NULL, ilptmp554);
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
