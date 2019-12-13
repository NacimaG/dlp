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
 { ILPm_print, 
ILPm_classOf, 
 } } }
};


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp31; 
{ 
  ILP_Object ilptmp32; 
  ILP_Object ilptmp33; 
  ILP_Object ilptmp34; 
ilptmp33 = ILP_Integer2ILP(11); 
ilptmp34 = ILP_Integer2ILP(22); 
ilptmp32 = ILP_MakeInstance(Point); 
ilptmp32->_content.asInstance.field[0] = ilptmp33; 
ilptmp32->_content.asInstance.field[1] = ilptmp34; 
ilptmp31 = ilptmp32; 
}

  {
    ILP_Object point1 = ilptmp31;
{ 
  ILP_Object ilptmp35; 
{ 
  ILP_Object ilptmp36; 
  ILP_Object ilptmp37; 
ilptmp36 = point1; 
ilptmp37 = ILP_Integer2ILP(810); 
if ( ILP_IsA(ilptmp36, Point ) ) {
ilptmp35 = ilptmp36->_content.asInstance.field[0] = ilptmp37;
} else {
ilptmp35 =  ILP_UnknownFieldError("x", ilptmp36);
}
}
{ 
  ILP_Object ilptmp38; 
ilptmp38 = point1; 
if ( ILP_IsA(ilptmp38, Point ) ) {
ilptmp35 = ilptmp38->_content.asInstance.field[0];
} else {
ilptmp35 =  ILP_UnknownFieldError("x", ilptmp38);
}
}
return ilptmp35; 
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
