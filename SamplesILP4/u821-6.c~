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
  ILP_Object ilptmp330; 
  ILP_Object ilptmp331; 
{ 
  ILP_Object ilptmp332; 
ilptmp332 = self1; 
if ( ILP_IsA(ilptmp332, Point ) ) {
ilptmp330 = ilptmp332->_content.asInstance.field[0];
} else {
ilptmp330 =  ILP_UnknownFieldError("x", ilptmp332);
}
}
{ 
  ILP_Object ilptmp333; 
ilptmp333 = self1; 
if ( ILP_IsA(ilptmp333, Point ) ) {
ilptmp331 = ilptmp333->_content.asInstance.field[1];
} else {
ilptmp331 =  ILP_UnknownFieldError("y", ilptmp333);
}
}
return ILP_Plus(ilptmp330, ilptmp331);
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
  ILP_Object ilptmp334; 
  ILP_Object ilptmp335; 
{ 
  ILP_Object ilptmp336; 
  ILP_Object ilptmp337; 
ilptmp336 = z4; 
{ 
  ILP_Object ilptmp338; 
ilptmp338 = self3; 
if ( ILP_IsA(ilptmp338, Point ) ) {
ilptmp337 = ilptmp338->_content.asInstance.field[0];
} else {
ilptmp337 =  ILP_UnknownFieldError("x", ilptmp338);
}
}
ilptmp334 = ILP_Times(ilptmp336, ilptmp337);
} 
{ 
  ILP_Object ilptmp339; 
  ILP_Object ilptmp340; 
ilptmp339 = t5; 
{ 
  ILP_Object ilptmp341; 
ilptmp341 = self3; 
if ( ILP_IsA(ilptmp341, Point ) ) {
ilptmp340 = ilptmp341->_content.asInstance.field[1];
} else {
ilptmp340 =  ILP_UnknownFieldError("y", ilptmp341);
}
}
ilptmp335 = ILP_Times(ilptmp339, ilptmp340);
} 
return ILP_Plus(ilptmp334, ilptmp335);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp342; 
{ 
  ILP_Object ilptmp343; 
  ILP_Object ilptmp344; 
  ILP_Object ilptmp345; 
  ILP_Object ilptmp346; 
ilptmp344 = ILP_Integer2ILP(11); 
ilptmp345 = ILP_Integer2ILP(22); 
ilptmp346 =  ILP_String2ILP("red"); 
ilptmp343 = ILP_MakeInstance(PointColore); 
ilptmp343->_content.asInstance.field[0] = ilptmp344; 
ilptmp343->_content.asInstance.field[1] = ilptmp345; 
ilptmp343->_content.asInstance.field[2] = ilptmp346; 
ilptmp342 = ilptmp343; 
}
ilptmp342 = ILP_Integer2ILP(821); 
return ilptmp342; 
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
