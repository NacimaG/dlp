#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 

/* Global functions */ 


/* Classes */ 
ILP_GenerateClass(2);
extern struct ILP_Class2 ILP_object_Point_class; 
extern struct ILP_Field ILP_object_x_field; 
extern struct ILP_Field ILP_object_y_field; 
ILP_Object ilp__print_2(ILP_Closure ilp_useless,     ILP_Object self1);

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

struct ILP_Class2 ILP_object_Point_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Object_class,
         "Point",
         2,
         &ILP_object_y_field,
         2,
 { ilp__print_2, 
ILPm_classOf, 
 } } }
};
extern struct ILP_Class2 ILP_object_PointColore_class; 
extern struct ILP_Field ILP_object_color_field; 
ILP_Object ilp__print_4(ILP_Closure ilp_useless,     ILP_Object self3);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_PointColore_class,
   &ILP_object_y_field,
    "color",
  2 } }
};

struct ILP_Class2 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Point_class,
         "PointColore",
         3,
         &ILP_object_color_field,
         2,
 { ilp__print_4, 
ILPm_classOf, 
 } } }
};

ILP_Object ilp__print_2(ILP_Closure ilp_useless,
    ILP_Object self1) {
static ILP_Method ilp_CurrentMethod = &ILP_object_print_method;
static ILP_general_function ilp_SuperMethod = ILPm_print;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self1;

{
return ILP_Integer2ILP(832); 
}
}

ILP_Object ilp__print_4(ILP_Closure ilp_useless,
    ILP_Object self3) {
static ILP_Method ilp_CurrentMethod = &ILP_object_print_method;
static ILP_general_function ilp_SuperMethod = ilp__print_2;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self3;

{
return ILP_Integer2ILP(833); 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_general_function ilptmp707; 
  ILP_Object ilptmp708; 
{ 
  ILP_Object ilptmp709; 
  ILP_Object ilptmp710; 
  ILP_Object ilptmp711; 
  ILP_Object ilptmp712; 
ilptmp710 = ILP_Integer2ILP(11); 
ilptmp711 = ILP_Integer2ILP(22); 
ilptmp712 =  ILP_String2ILP("red"); 
ilptmp709 = ILP_MakeInstance(PointColore); 
ilptmp709->_content.asInstance.field[0] = ilptmp710; 
ilptmp709->_content.asInstance.field[1] = ilptmp711; 
ilptmp709->_content.asInstance.field[2] = ilptmp712; 
ilptmp708 = ilptmp709; 
}
ilptmp707 = ILP_find_method(ilptmp708, &ILP_object_print_method, 1);
return ilptmp707(NULL, ilptmp708);
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
