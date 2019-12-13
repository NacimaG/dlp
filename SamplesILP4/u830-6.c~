#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 

/* Global functions */ 


/* Classes */ 
ILP_GenerateClass(4);
extern struct ILP_Class4 ILP_object_Point_class; 
extern struct ILP_Field ILP_object_x_field; 
extern struct ILP_Field ILP_object_y_field; 
ILP_Object ilp__longueur_2(ILP_Closure ilp_useless,     ILP_Object self1);
ILP_Object ilp__m1_6(ILP_Closure ilp_useless,     ILP_Object self3,
    ILP_Object z4,
    ILP_Object t5);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_Point_class,
   NULL,
    "x",
  0 } }
};

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_Point_class,
   &ILP_object_x_field,
    "y",
  1 } }
};

struct ILP_Class4 ILP_object_Point_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Object_class,
         "Point",
         2,
         &ILP_object_y_field,
         4,
 { ILPm_print, 
ILPm_classOf, 
ilp__longueur_2, 
ilp__m1_6, 
 } } }
};

struct ILP_Method ILP_object_longueur_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_Point_class,
  "longueur",
  1,  /* arité */
  2 /* offset */ 
    } }
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_Point_class,
  "m1",
  3,  /* arité */
  3 /* offset */ 
    } }
};

ILP_Object ilp__longueur_2(ILP_Closure ilp_useless,
    ILP_Object self1) {
static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self1;

{
{ 
  ILP_Object ilptmp628; 
  ILP_Object ilptmp629; 
{ 
  ILP_Object ilptmp630; 
ilptmp630 = self1; 
if ( ILP_IsA(ilptmp630, Point ) ) {
ilptmp628 = ilptmp630->_content.asInstance.field[0];
} else {
ilptmp628 =  ILP_UnknownFieldError("x", ilptmp630);
}
}
{ 
  ILP_Object ilptmp631; 
ilptmp631 = self1; 
if ( ILP_IsA(ilptmp631, Point ) ) {
ilptmp629 = ilptmp631->_content.asInstance.field[1];
} else {
ilptmp629 =  ILP_UnknownFieldError("y", ilptmp631);
}
}
return ILP_Plus(ilptmp628, ilptmp629);
} 
}
}

ILP_Object ilp__m1_6(ILP_Closure ilp_useless,
    ILP_Object self3,
    ILP_Object z4,
    ILP_Object t5) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self3;
 ilp_CurrentArguments[1] = z4;
 ilp_CurrentArguments[2] = t5;

{
{ 
  ILP_Object ilptmp632; 
  ILP_Object ilptmp633; 
{ 
  ILP_Object ilptmp634; 
  ILP_Object ilptmp635; 
ilptmp634 = z4; 
{ 
  ILP_Object ilptmp636; 
ilptmp636 = self3; 
if ( ILP_IsA(ilptmp636, Point ) ) {
ilptmp635 = ilptmp636->_content.asInstance.field[0];
} else {
ilptmp635 =  ILP_UnknownFieldError("x", ilptmp636);
}
}
ilptmp632 = ILP_Times(ilptmp634, ilptmp635);
} 
{ 
  ILP_Object ilptmp637; 
  ILP_Object ilptmp638; 
ilptmp637 = t5; 
{ 
  ILP_Object ilptmp639; 
ilptmp639 = self3; 
if ( ILP_IsA(ilptmp639, Point ) ) {
ilptmp638 = ilptmp639->_content.asInstance.field[1];
} else {
ilptmp638 =  ILP_UnknownFieldError("y", ilptmp639);
}
}
ilptmp633 = ILP_Times(ilptmp637, ilptmp638);
} 
return ILP_Plus(ilptmp632, ilptmp633);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp640; 
{ 
  ILP_Object ilptmp641; 
{ 
  ILP_Object ilptmp642; 
  ILP_Object ilptmp643; 
  ILP_Object ilptmp644; 
ilptmp643 = ILP_Integer2ILP(11); 
ilptmp644 = ILP_Integer2ILP(22); 
ilptmp642 = ILP_MakeInstance(Point); 
ilptmp642->_content.asInstance.field[0] = ilptmp643; 
ilptmp642->_content.asInstance.field[1] = ilptmp644; 
ilptmp641 = ilptmp642; 
}

  {
    ILP_Object point7 = ilptmp641;
{ 
  ILP_general_function ilptmp645; 
  ILP_Object ilptmp646; 
ilptmp646 = point7; 
ilptmp645 = ILP_find_method(ilptmp646, &ILP_object_print_method, 1);
ilptmp640 = ilptmp645(NULL, ilptmp646);
}

  }
}
ilptmp640 = ILP_Integer2ILP(830); 
return ilptmp640; 
} 

} 

static ILP_Object ilp_caught_program () {
  struct ILP_catcher* current_catcher = ILP_current_catcher;
  struct ILP_catcher new_catcher;

  if ( 0 == setjmp(new_catcher._jmp_buf) ) {
    ILP_establish_catcher(&new_catcher);
    return ilp_program();
  };
  return ILP_current_exception;
}

int main (int argc, char *argv[]) 
{ 
  ILP_START_GC; 
  ILP_print(ilp_caught_program()); 
  ILP_newline(); 
  return EXIT_SUCCESS; 
} 
