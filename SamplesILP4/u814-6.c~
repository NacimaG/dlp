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
return ILP_Integer2ILP(812); 
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
  ILP_Object ilptmp99; 
  ILP_Object ilptmp100; 
ilptmp99 = z4; 
ilptmp100 = t5; 
return ILP_Plus(ilptmp99, ilptmp100);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp101; 
{ 
  ILP_Object ilptmp102; 
  ILP_Object ilptmp103; 
  ILP_Object ilptmp104; 
ilptmp103 = ILP_Integer2ILP(11); 
ilptmp104 = ILP_Integer2ILP(22); 
ilptmp102 = ILP_MakeInstance(Point); 
ilptmp102->_content.asInstance.field[0] = ilptmp103; 
ilptmp102->_content.asInstance.field[1] = ilptmp104; 
ilptmp101 = ilptmp102; 
}

  {
    ILP_Object point7 = ilptmp101;
{ 
  ILP_general_function ilptmp105; 
  ILP_Object ilptmp106; 
  ILP_Object ilptmp107; 
  ILP_Object ilptmp108; 
ilptmp106 = point7; 
ilptmp107 = ILP_Integer2ILP(2); 
{ 
  ILP_general_function ilptmp109; 
  ILP_Object ilptmp110; 
ilptmp110 = point7; 
ilptmp109 = ILP_find_method(ilptmp110, &ILP_object_longueur_method, 1);
ilptmp108 = ilptmp109(NULL, ilptmp110);
}
ilptmp105 = ILP_find_method(ilptmp106, &ILP_object_m1_method, 3);
return ilptmp105(NULL, ilptmp106, ilptmp107, ilptmp108);
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
