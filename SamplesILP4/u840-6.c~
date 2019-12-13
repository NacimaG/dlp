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
ILP_Object ilp__m1_2(ILP_Closure ilp_useless,     ILP_Object self1);

struct ILP_Field ILP_object_x_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_Point_class,
   NULL,
    "x",
  0 } }
};

struct ILP_Class3 ILP_object_Point_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Object_class,
         "Point",
         1,
         &ILP_object_x_field,
         3,
 { ILPm_print, 
ILPm_classOf, 
ilp__m1_2, 
 } } }
};

struct ILP_Method ILP_object_m1_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_Point_class,
  "m1",
  1,  /* arité */
  2 /* offset */ 
    } }
};
extern struct ILP_Class3 ILP_object_Point2D_class; 
extern struct ILP_Field ILP_object_y_field; 
ILP_Object ilp__m1_4(ILP_Closure ilp_useless,     ILP_Object self3);

struct ILP_Field ILP_object_y_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_Point2D_class,
   &ILP_object_x_field,
    "y",
  1 } }
};

struct ILP_Class3 ILP_object_Point2D_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Point_class,
         "Point2D",
         2,
         &ILP_object_y_field,
         3,
 { ILPm_print, 
ILPm_classOf, 
ilp__m1_4, 
 } } }
};

ILP_Object ilp__m1_2(ILP_Closure ilp_useless,
    ILP_Object self1) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self1;

{
{ 
  ILP_Object ilptmp787; 
ilptmp787 = self1; 
if ( ILP_IsA(ilptmp787, Point ) ) {
return ilptmp787->_content.asInstance.field[0];
} else {
return  ILP_UnknownFieldError("x", ilptmp787);
}
}
}
}

ILP_Object ilp__m1_4(ILP_Closure ilp_useless,
    ILP_Object self3) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = ilp__m1_2;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self3;

{
{ 
  ILP_Object ilptmp788; 
  ILP_Object ilptmp789; 
{ 
  ILP_Object ilptmp790; 
ilptmp790 = self3; 
if ( ILP_IsA(ilptmp790, Point2D ) ) {
ilptmp788 = ilptmp790->_content.asInstance.field[1];
} else {
ilptmp788 =  ILP_UnknownFieldError("y", ilptmp790);
}
}
ilptmp789 = ILP_FindAndCallSuperMethod(); 
return ILP_Times(ilptmp788, ilptmp789);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp791; 
{ 
  ILP_Object ilptmp792; 
  ILP_Object ilptmp793; 
  ILP_Object ilptmp794; 
ilptmp793 = ILP_Integer2ILP(10); 
ilptmp794 = ILP_Integer2ILP(84); 
ilptmp792 = ILP_MakeInstance(Point2D); 
ilptmp792->_content.asInstance.field[0] = ilptmp793; 
ilptmp792->_content.asInstance.field[1] = ilptmp794; 
ilptmp791 = ilptmp792; 
}

  {
    ILP_Object pc5 = ilptmp791;
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_general_function ilptmp795; 
  ILP_Object ilptmp796; 
ilptmp796 = pc5; 
ilptmp795 = ILP_find_method(ilptmp796, &ILP_object_m1_method, 1);
return ilptmp795(NULL, ilptmp796);
}
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
          ILP_establish_catcher(&new_catcher); 
          { ILP_Object e6 = ILP_current_exception; 
            ILP_current_exception = NULL; 
(void)ILP_FALSE; 
          } 
      }; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
return ILP_FALSE; 
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
