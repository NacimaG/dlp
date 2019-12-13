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
ILP_Object ilp__m2_3(ILP_Closure ilp_useless,     ILP_Object self1,
    ILP_Object u2);
ILP_Object ilp__m1_7(ILP_Closure ilp_useless,     ILP_Object self4,
    ILP_Object z5,
    ILP_Object t6);

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
ilp__m2_3, 
ilp__m1_7, 
 } } }
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_Point_class,
  "m2",
  2,  /* arité */
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
ILP_Object ilp__m1_11(ILP_Closure ilp_useless,     ILP_Object self8,
    ILP_Object z9,
    ILP_Object t10);

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
ilp__m2_3, 
ilp__m1_11, 
 } } }
};

ILP_Object ilp__m2_3(ILP_Closure ilp_useless,
    ILP_Object self1,
    ILP_Object u2) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[2];
 ilp_CurrentArguments[0] = self1;
 ilp_CurrentArguments[1] = u2;

{
{ 
  ILP_general_function ilptmp577; 
  ILP_Object ilptmp578; 
  ILP_Object ilptmp579; 
  ILP_Object ilptmp580; 
ilptmp578 = self1; 
ilptmp579 = ILP_Integer2ILP(1); 
ilptmp580 = u2; 
ilptmp577 = ILP_find_method(ilptmp578, &ILP_object_m1_method, 3);
return ilptmp577(NULL, ilptmp578, ilptmp579, ilptmp580);
}
}
}

ILP_Object ilp__m1_7(ILP_Closure ilp_useless,
    ILP_Object self4,
    ILP_Object z5,
    ILP_Object t6) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self4;
 ilp_CurrentArguments[1] = z5;
 ilp_CurrentArguments[2] = t6;

{
{ 
  ILP_Object ilptmp581; 
  ILP_Object ilptmp582; 
{ 
  ILP_Object ilptmp583; 
  ILP_Object ilptmp584; 
ilptmp583 = z5; 
{ 
  ILP_Object ilptmp585; 
ilptmp585 = self4; 
if ( ILP_IsA(ilptmp585, Point ) ) {
ilptmp584 = ilptmp585->_content.asInstance.field[0];
} else {
ilptmp584 =  ILP_UnknownFieldError("x", ilptmp585);
}
}
ilptmp581 = ILP_Times(ilptmp583, ilptmp584);
} 
{ 
  ILP_Object ilptmp586; 
  ILP_Object ilptmp587; 
ilptmp586 = t6; 
{ 
  ILP_Object ilptmp588; 
ilptmp588 = self4; 
if ( ILP_IsA(ilptmp588, Point ) ) {
ilptmp587 = ilptmp588->_content.asInstance.field[1];
} else {
ilptmp587 =  ILP_UnknownFieldError("y", ilptmp588);
}
}
ilptmp582 = ILP_Times(ilptmp586, ilptmp587);
} 
return ILP_Plus(ilptmp581, ilptmp582);
} 
}
}

ILP_Object ilp__m1_11(ILP_Closure ilp_useless,
    ILP_Object self8,
    ILP_Object z9,
    ILP_Object t10) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = ilp__m1_7;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self8;
 ilp_CurrentArguments[1] = z9;
 ilp_CurrentArguments[2] = t10;

{
{ 
  ILP_Object ilptmp589; 
  ILP_Object ilptmp590; 
ilptmp589 = ILP_Integer2ILP(826); 
ilptmp590 = z9; 
return ILP_Plus(ilptmp589, ilptmp590);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp591; 
{ 
  ILP_Object ilptmp592; 
  ILP_Object ilptmp593; 
  ILP_Object ilptmp594; 
  ILP_Object ilptmp595; 
ilptmp593 = ILP_Integer2ILP(11); 
ilptmp594 = ILP_Integer2ILP(22); 
ilptmp595 =  ILP_String2ILP("red"); 
ilptmp592 = ILP_MakeInstance(PointColore); 
ilptmp592->_content.asInstance.field[0] = ilptmp593; 
ilptmp592->_content.asInstance.field[1] = ilptmp594; 
ilptmp592->_content.asInstance.field[2] = ilptmp595; 
ilptmp591 = ilptmp592; 
}

  {
    ILP_Object pc12 = ilptmp591;
{ 
  ILP_general_function ilptmp596; 
  ILP_Object ilptmp597; 
  ILP_Object ilptmp598; 
ilptmp597 = pc12; 
ilptmp598 = ILP_Integer2ILP(2); 
ilptmp596 = ILP_find_method(ilptmp597, &ILP_object_m2_method, 2);
return ilptmp596(NULL, ilptmp597, ilptmp598);
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
