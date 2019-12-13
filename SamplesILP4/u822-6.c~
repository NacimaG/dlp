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
  ILP_Object ilptmp368; 
  ILP_Object ilptmp369; 
{ 
  ILP_Object ilptmp370; 
ilptmp370 = self1; 
if ( ILP_IsA(ilptmp370, Point ) ) {
ilptmp368 = ilptmp370->_content.asInstance.field[0];
} else {
ilptmp368 =  ILP_UnknownFieldError("x", ilptmp370);
}
}
{ 
  ILP_Object ilptmp371; 
ilptmp371 = self1; 
if ( ILP_IsA(ilptmp371, Point ) ) {
ilptmp369 = ilptmp371->_content.asInstance.field[1];
} else {
ilptmp369 =  ILP_UnknownFieldError("y", ilptmp371);
}
}
return ILP_Plus(ilptmp368, ilptmp369);
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
  ILP_Object ilptmp372; 
  ILP_Object ilptmp373; 
{ 
  ILP_Object ilptmp374; 
  ILP_Object ilptmp375; 
ilptmp374 = z4; 
{ 
  ILP_Object ilptmp376; 
ilptmp376 = self3; 
if ( ILP_IsA(ilptmp376, Point ) ) {
ilptmp375 = ilptmp376->_content.asInstance.field[0];
} else {
ilptmp375 =  ILP_UnknownFieldError("x", ilptmp376);
}
}
ilptmp372 = ILP_Times(ilptmp374, ilptmp375);
} 
{ 
  ILP_Object ilptmp377; 
  ILP_Object ilptmp378; 
ilptmp377 = t5; 
{ 
  ILP_Object ilptmp379; 
ilptmp379 = self3; 
if ( ILP_IsA(ilptmp379, Point ) ) {
ilptmp378 = ilptmp379->_content.asInstance.field[1];
} else {
ilptmp378 =  ILP_UnknownFieldError("y", ilptmp379);
}
}
ilptmp373 = ILP_Times(ilptmp377, ilptmp378);
} 
return ILP_Plus(ilptmp372, ilptmp373);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp380; 
{ 
  ILP_Object ilptmp381; 
  ILP_Object ilptmp382; 
  ILP_Object ilptmp383; 
  ILP_Object ilptmp384; 
ilptmp382 = ILP_Integer2ILP(11); 
ilptmp383 = ILP_Integer2ILP(22); 
ilptmp384 =  ILP_String2ILP("red"); 
ilptmp381 = ILP_MakeInstance(PointColore); 
ilptmp381->_content.asInstance.field[0] = ilptmp382; 
ilptmp381->_content.asInstance.field[1] = ilptmp383; 
ilptmp381->_content.asInstance.field[2] = ilptmp384; 
ilptmp380 = ilptmp381; 
}

  {
    ILP_Object pc7 = ilptmp380;
{ 
  ILP_Object ilptmp385; 
{ 
  ILP_Object ilptmp386; 
  ILP_Object ilptmp387; 
ilptmp386 = pc7; 
ilptmp387 = ILP_Integer2ILP(822); 
if ( ILP_IsA(ilptmp386, PointColore ) ) {
ilptmp385 = ilptmp386->_content.asInstance.field[2] = ilptmp387;
} else {
ilptmp385 =  ILP_UnknownFieldError("color", ilptmp386);
}
}
{ 
  ILP_Object ilptmp388; 
ilptmp388 = pc7; 
if ( ILP_IsA(ilptmp388, PointColore ) ) {
ilptmp385 = ilptmp388->_content.asInstance.field[2];
} else {
ilptmp385 =  ILP_UnknownFieldError("color", ilptmp388);
}
}
return ilptmp385; 
} 

  }
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
