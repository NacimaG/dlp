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
  ILP_Object ilptmp410; 
  ILP_Object ilptmp411; 
{ 
  ILP_Object ilptmp412; 
ilptmp412 = self1; 
if ( ILP_IsA(ilptmp412, Point ) ) {
ilptmp410 = ilptmp412->_content.asInstance.field[0];
} else {
ilptmp410 =  ILP_UnknownFieldError("x", ilptmp412);
}
}
{ 
  ILP_Object ilptmp413; 
ilptmp413 = self1; 
if ( ILP_IsA(ilptmp413, Point ) ) {
ilptmp411 = ilptmp413->_content.asInstance.field[1];
} else {
ilptmp411 =  ILP_UnknownFieldError("y", ilptmp413);
}
}
return ILP_Plus(ilptmp410, ilptmp411);
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
  ILP_Object ilptmp414; 
  ILP_Object ilptmp415; 
{ 
  ILP_Object ilptmp416; 
  ILP_Object ilptmp417; 
ilptmp416 = z4; 
{ 
  ILP_Object ilptmp418; 
ilptmp418 = self3; 
if ( ILP_IsA(ilptmp418, Point ) ) {
ilptmp417 = ilptmp418->_content.asInstance.field[0];
} else {
ilptmp417 =  ILP_UnknownFieldError("x", ilptmp418);
}
}
ilptmp414 = ILP_Times(ilptmp416, ilptmp417);
} 
{ 
  ILP_Object ilptmp419; 
  ILP_Object ilptmp420; 
ilptmp419 = t5; 
{ 
  ILP_Object ilptmp421; 
ilptmp421 = self3; 
if ( ILP_IsA(ilptmp421, Point ) ) {
ilptmp420 = ilptmp421->_content.asInstance.field[1];
} else {
ilptmp420 =  ILP_UnknownFieldError("y", ilptmp421);
}
}
ilptmp415 = ILP_Times(ilptmp419, ilptmp420);
} 
return ILP_Plus(ilptmp414, ilptmp415);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp422; 
{ 
  ILP_Object ilptmp423; 
  ILP_Object ilptmp424; 
  ILP_Object ilptmp425; 
  ILP_Object ilptmp426; 
ilptmp424 = ILP_Integer2ILP(11); 
ilptmp425 = ILP_Integer2ILP(22); 
ilptmp426 =  ILP_String2ILP("red"); 
ilptmp423 = ILP_MakeInstance(PointColore); 
ilptmp423->_content.asInstance.field[0] = ilptmp424; 
ilptmp423->_content.asInstance.field[1] = ilptmp425; 
ilptmp423->_content.asInstance.field[2] = ilptmp426; 
ilptmp422 = ilptmp423; 
}

  {
    ILP_Object pc7 = ilptmp422;
{ 
  ILP_Object ilptmp427; 
{ 
  ILP_Object ilptmp428; 
  ILP_Object ilptmp429; 
ilptmp428 = pc7; 
ilptmp429 = ILP_Integer2ILP(823); 
if ( ILP_IsA(ilptmp428, Point ) ) {
ilptmp427 = ilptmp428->_content.asInstance.field[1] = ilptmp429;
} else {
ilptmp427 =  ILP_UnknownFieldError("y", ilptmp428);
}
}
{ 
  ILP_Object ilptmp430; 
ilptmp430 = pc7; 
if ( ILP_IsA(ilptmp430, Point ) ) {
ilptmp427 = ilptmp430->_content.asInstance.field[1];
} else {
ilptmp427 =  ILP_UnknownFieldError("y", ilptmp430);
}
}
return ilptmp427; 
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
