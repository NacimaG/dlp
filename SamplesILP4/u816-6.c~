#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 

/* Global functions */ 


/* Classes */ 
ILP_GenerateClass(3);
extern struct ILP_Class3 ILP_object_Point_class; 
extern struct ILP_Field ILP_object_x_field; 
extern struct ILP_Field ILP_object_y_field; 
ILP_Object ilp__m1_4(ILP_Closure ilp_useless,     ILP_Object self1,
    ILP_Object z2,
    ILP_Object t3);

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

struct ILP_Class3 ILP_object_Point_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Object_class,
         "Point",
         2,
         &ILP_object_y_field,
         3,
 { ILPm_print, 
ILPm_classOf, 
ilp__m1_4, 
 } } }
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_Point_class,
  "m1",
  3,  /* arité */
  2 /* offset */ 
    } }
};

ILP_Object ilp__m1_4(ILP_Closure ilp_useless,
    ILP_Object self1,
    ILP_Object z2,
    ILP_Object t3) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self1;
 ilp_CurrentArguments[1] = z2;
 ilp_CurrentArguments[2] = t3;

{
{ 
  ILP_Object ilptmp147; 
  ILP_Object ilptmp148; 
{ 
  ILP_Object ilptmp149; 
  ILP_Object ilptmp150; 
ilptmp149 = z2; 
{ 
  ILP_Object ilptmp151; 
ilptmp151 = self1; 
if ( ILP_IsA(ilptmp151, Point ) ) {
ilptmp150 = ilptmp151->_content.asInstance.field[0];
} else {
ilptmp150 =  ILP_UnknownFieldError("x", ilptmp151);
}
}
ilptmp147 = ILP_Times(ilptmp149, ilptmp150);
} 
{ 
  ILP_Object ilptmp152; 
  ILP_Object ilptmp153; 
ilptmp152 = t3; 
{ 
  ILP_Object ilptmp154; 
ilptmp154 = self1; 
if ( ILP_IsA(ilptmp154, Point ) ) {
ilptmp153 = ilptmp154->_content.asInstance.field[1];
} else {
ilptmp153 =  ILP_UnknownFieldError("y", ilptmp154);
}
}
ilptmp148 = ILP_Times(ilptmp152, ilptmp153);
} 
return ILP_Plus(ilptmp147, ilptmp148);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp155; 
{ 
  ILP_Object ilptmp156; 
  ILP_Object ilptmp157; 
  ILP_Object ilptmp158; 
ilptmp157 = ILP_Integer2ILP(2); 
ilptmp158 = ILP_Integer2ILP(3); 
ilptmp156 = ILP_MakeInstance(Point); 
ilptmp156->_content.asInstance.field[0] = ilptmp157; 
ilptmp156->_content.asInstance.field[1] = ilptmp158; 
ilptmp155 = ilptmp156; 
}

  {
    ILP_Object point5 = ilptmp155;
{ 
  ILP_general_function ilptmp159; 
  ILP_Object ilptmp160; 
  ILP_Object ilptmp161; 
  ILP_Object ilptmp162; 
ilptmp160 = point5; 
ilptmp161 = ILP_Integer2ILP(2); 
ilptmp162 = ILP_Integer2ILP(3); 
ilptmp159 = ILP_find_method(ilptmp160, &ILP_object_m1_method, 3);
return ilptmp159(NULL, ilptmp160, ilptmp161, ilptmp162);
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
