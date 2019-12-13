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
ILP_Object ilp__pr_3aint_2(ILP_Closure ilp_useless,     ILP_Object self1);

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
ilp__pr_3aint_2, 
 } } }
};

struct ILP_Method ILP_object_pr_3aint_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_Point_class,
  "pr:int",
  1,  /* arité */
  2 /* offset */ 
    } }
};

ILP_Object ilp__pr_3aint_2(ILP_Closure ilp_useless,
    ILP_Object self1) {
static ILP_Method ilp_CurrentMethod = &ILP_object_pr_3aint_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self1;

{
return ILP_Integer2ILP(8452); 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_general_function ilptmp1003; 
  ILP_Object ilptmp1004; 
{ 
  ILP_Object ilptmp1005; 
  ILP_Object ilptmp1006; 
  ILP_Object ilptmp1007; 
ilptmp1006 = ILP_Integer2ILP(11); 
ilptmp1007 = ILP_Integer2ILP(22); 
ilptmp1005 = ILP_MakeInstance(Point); 
ilptmp1005->_content.asInstance.field[0] = ilptmp1006; 
ilptmp1005->_content.asInstance.field[1] = ilptmp1007; 
ilptmp1004 = ilptmp1005; 
}
ilptmp1003 = ILP_find_method(ilptmp1004, &ILP_object_pr_3aint_method, 1);
return ilptmp1003(NULL, ilptmp1004);
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
