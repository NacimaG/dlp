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
ILP_GenerateClass(5);
extern struct ILP_Class5 ILP_object_PointColore_class; 
extern struct ILP_Field ILP_object_color_field; 
ILP_Object ilp__m2_9(ILP_Closure ilp_useless,     ILP_Object self7,
    ILP_Object x8);

struct ILP_Field ILP_object_color_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_PointColore_class,
   &ILP_object_y_field,
    "color",
  2 } }
};

struct ILP_Class5 ILP_object_PointColore_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Point_class,
         "PointColore",
         3,
         &ILP_object_color_field,
         5,
 { ILPm_print, 
ILPm_classOf, 
ilp__longueur_2, 
ilp__m1_6, 
ilp__m2_9, 
 } } }
};

struct ILP_Method ILP_object_m2_method = {
  &ILP_object_Method_class,
  { { (struct ILP_Class*) &ILP_object_PointColore_class,
  "m2",
  2,  /* arité */
  4 /* offset */ 
    } }
};

ILP_Object ilp__longueur_2(ILP_Closure ilp_useless,
    ILP_Object self1) {
static ILP_Method ilp_CurrentMethod = &ILP_object_longueur_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[1];
 ilp_CurrentArguments[0] = self1;

{
{ 
  ILP_Object ilptmp669; 
  ILP_Object ilptmp670; 
{ 
  ILP_Object ilptmp671; 
ilptmp671 = self1; 
if ( ILP_IsA(ilptmp671, Point ) ) {
ilptmp669 = ilptmp671->_content.asInstance.field[0];
} else {
ilptmp669 =  ILP_UnknownFieldError("x", ilptmp671);
}
}
{ 
  ILP_Object ilptmp672; 
ilptmp672 = self1; 
if ( ILP_IsA(ilptmp672, Point ) ) {
ilptmp670 = ilptmp672->_content.asInstance.field[1];
} else {
ilptmp670 =  ILP_UnknownFieldError("y", ilptmp672);
}
}
return ILP_Plus(ilptmp669, ilptmp670);
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
  ILP_Object ilptmp673; 
  ILP_Object ilptmp674; 
{ 
  ILP_Object ilptmp675; 
  ILP_Object ilptmp676; 
ilptmp675 = z4; 
{ 
  ILP_Object ilptmp677; 
ilptmp677 = self3; 
if ( ILP_IsA(ilptmp677, Point ) ) {
ilptmp676 = ilptmp677->_content.asInstance.field[0];
} else {
ilptmp676 =  ILP_UnknownFieldError("x", ilptmp677);
}
}
ilptmp673 = ILP_Times(ilptmp675, ilptmp676);
} 
{ 
  ILP_Object ilptmp678; 
  ILP_Object ilptmp679; 
ilptmp678 = t5; 
{ 
  ILP_Object ilptmp680; 
ilptmp680 = self3; 
if ( ILP_IsA(ilptmp680, Point ) ) {
ilptmp679 = ilptmp680->_content.asInstance.field[1];
} else {
ilptmp679 =  ILP_UnknownFieldError("y", ilptmp680);
}
}
ilptmp674 = ILP_Times(ilptmp678, ilptmp679);
} 
return ILP_Plus(ilptmp673, ilptmp674);
} 
}
}

ILP_Object ilp__m2_9(ILP_Closure ilp_useless,
    ILP_Object self7,
    ILP_Object x8) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m2_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[2];
 ilp_CurrentArguments[0] = self7;
 ilp_CurrentArguments[1] = x8;

{
{ 
  ILP_Object ilptmp681; 
  ILP_Object ilptmp682; 
ilptmp681 = ILP_Integer2ILP(823); 
ilptmp682 = x8; 
return ILP_Plus(ilptmp681, ilptmp682);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp683; 
{ 
  ILP_Object ilptmp684; 
{ 
  ILP_Object ilptmp685; 
  ILP_Object ilptmp686; 
  ILP_Object ilptmp687; 
  ILP_Object ilptmp688; 
ilptmp686 = ILP_Integer2ILP(11); 
ilptmp687 = ILP_Integer2ILP(22); 
ilptmp688 =  ILP_String2ILP("red"); 
ilptmp685 = ILP_MakeInstance(PointColore); 
ilptmp685->_content.asInstance.field[0] = ilptmp686; 
ilptmp685->_content.asInstance.field[1] = ilptmp687; 
ilptmp685->_content.asInstance.field[2] = ilptmp688; 
ilptmp684 = ilptmp685; 
}

  {
    ILP_Object pc10 = ilptmp684;
{ 
  ILP_general_function ilptmp689; 
  ILP_Object ilptmp690; 
ilptmp690 = pc10; 
ilptmp689 = ILP_find_method(ilptmp690, &ILP_object_print_method, 1);
ilptmp683 = ilptmp689(NULL, ilptmp690);
}

  }
}
ilptmp683 = ILP_Integer2ILP(831); 
return ilptmp683; 
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
