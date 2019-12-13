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
extern struct ILP_Class4 ILP_object_PointColore_class; 
extern struct ILP_Field ILP_object_color_field; 

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_PointColore_class,
   &ILP_object_y_field,
    "color",
  2 } }
};

struct ILP_Class4 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Point_class,
         "PointColore",
         3,
         &ILP_object_color_field,
         4,
 { ILPm_print, 
ILPm_classOf, 
ilp__longueur_2, 
ilp__m1_6, 
 } } }
};

ILP_Object ilp__longueur_2(ILP_Closure ilp_useless,
    ILP_Object self1) {
static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self1;

{
{ 
  ILP_Object ilptmp301; 
  ILP_Object ilptmp302; 
{ 
  ILP_Object ilptmp303; 
ilptmp303 = self1; 
if ( ILP_IsA(ilptmp303, Point ) ) {
ilptmp301 = ilptmp303->_content.asInstance.field[0];
} else {
ilptmp301 =  ILP_UnknownFieldError("x", ilptmp303);
}
}
{ 
  ILP_Object ilptmp304; 
ilptmp304 = self1; 
if ( ILP_IsA(ilptmp304, Point ) ) {
ilptmp302 = ilptmp304->_content.asInstance.field[1];
} else {
ilptmp302 =  ILP_UnknownFieldError("y", ilptmp304);
}
}
return ILP_Plus(ilptmp301, ilptmp302);
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
  ILP_Object ilptmp305; 
  ILP_Object ilptmp306; 
{ 
  ILP_Object ilptmp307; 
  ILP_Object ilptmp308; 
ilptmp307 = z4; 
{ 
  ILP_Object ilptmp309; 
ilptmp309 = self3; 
if ( ILP_IsA(ilptmp309, Point ) ) {
ilptmp308 = ilptmp309->_content.asInstance.field[0];
} else {
ilptmp308 =  ILP_UnknownFieldError("x", ilptmp309);
}
}
ilptmp305 = ILP_Times(ilptmp307, ilptmp308);
} 
{ 
  ILP_Object ilptmp310; 
  ILP_Object ilptmp311; 
ilptmp310 = t5; 
{ 
  ILP_Object ilptmp312; 
ilptmp312 = self3; 
if ( ILP_IsA(ilptmp312, Point ) ) {
ilptmp311 = ilptmp312->_content.asInstance.field[1];
} else {
ilptmp311 =  ILP_UnknownFieldError("y", ilptmp312);
}
}
ilptmp306 = ILP_Times(ilptmp310, ilptmp311);
} 
return ILP_Plus(ilptmp305, ilptmp306);
} 
}
}


ILP_Object ilp_program () 
{ 
return ILP_Integer2ILP(820); 

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
