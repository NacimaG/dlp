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
ILP_Object ilp__m1_4(ILP_Closure ilp_useless,     ILP_Object self1,
    ILP_Object tt2,
    ILP_Object uu3);

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
extern struct ILP_Class3 ILP_object_Point2D_class; 
extern struct ILP_Field ILP_object_y_field; 
ILP_Object ilp__m1_8(ILP_Closure ilp_useless,     ILP_Object self5,
    ILP_Object ttt6,
    ILP_Object uuu7);

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
ilp__m1_8, 
 } } }
};
extern struct ILP_Class3 ILP_object_Point3D_class; 
extern struct ILP_Field ILP_object_z_field; 
ILP_Object ilp__m1_12(ILP_Closure ilp_useless,     ILP_Object self9,
    ILP_Object t10,
    ILP_Object u11);

struct ILP_Field ILP_object_z_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_Point3D_class,
   &ILP_object_y_field,
    "z",
  2 } }
};

struct ILP_Class3 ILP_object_Point3D_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Point2D_class,
         "Point3D",
         3,
         &ILP_object_z_field,
         3,
 { ILPm_print, 
ILPm_classOf, 
ilp__m1_12, 
 } } }
};
extern struct ILP_Class3 ILP_object_Point4D_class; 
extern struct ILP_Field ILP_object_t_field; 
ILP_Object ilp__m1_16(ILP_Closure ilp_useless,     ILP_Object self13,
    ILP_Object tt14,
    ILP_Object uu15);

struct ILP_Field ILP_object_t_field = {
  &ILP_object_Field_class,
     { { (ILP_Class) &ILP_object_Point4D_class,
   &ILP_object_z_field,
    "t",
  3 } }
};

struct ILP_Class3 ILP_object_Point4D_class = {
  &ILP_object_Class_class,
  { { (ILP_Class) &ILP_object_Point3D_class,
         "Point4D",
         4,
         &ILP_object_t_field,
         3,
 { ILPm_print, 
ILPm_classOf, 
ilp__m1_16, 
 } } }
};

ILP_Object ilp__m1_4(ILP_Closure ilp_useless,
    ILP_Object self1,
    ILP_Object tt2,
    ILP_Object uu3) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self1;
 ilp_CurrentArguments[1] = tt2;
 ilp_CurrentArguments[2] = uu3;

{
{ 
  ILP_Object ilptmp1044; 
  ILP_Object ilptmp1045; 
ilptmp1044 = tt2; 
{ 
  ILP_Object ilptmp1046; 
ilptmp1046 = self1; 
if ( ILP_IsA(ilptmp1046, Point ) ) {
ilptmp1045 = ilptmp1046->_content.asInstance.field[0];
} else {
ilptmp1045 =  ILP_UnknownFieldError("x", ilptmp1046);
}
}
return ILP_Times(ilptmp1044, ilptmp1045);
} 
}
}

ILP_Object ilp__m1_8(ILP_Closure ilp_useless,
    ILP_Object self5,
    ILP_Object ttt6,
    ILP_Object uuu7) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = ilp__m1_4;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self5;
 ilp_CurrentArguments[1] = ttt6;
 ilp_CurrentArguments[2] = uuu7;

{
{ 
  ILP_Object ilptmp1047; 
  ILP_Object ilptmp1048; 
{ 
  ILP_Object ilptmp1049; 
  ILP_Object ilptmp1050; 
ilptmp1049 = uuu7; 
{ 
  ILP_Object ilptmp1051; 
ilptmp1051 = self5; 
if ( ILP_IsA(ilptmp1051, Point2D ) ) {
ilptmp1050 = ilptmp1051->_content.asInstance.field[1];
} else {
ilptmp1050 =  ILP_UnknownFieldError("y", ilptmp1051);
}
}
ilptmp1047 = ILP_Times(ilptmp1049, ilptmp1050);
} 
ilptmp1048 = ILP_FindAndCallSuperMethod(); 
return ILP_Plus(ilptmp1047, ilptmp1048);
} 
}
}

ILP_Object ilp__m1_12(ILP_Closure ilp_useless,
    ILP_Object self9,
    ILP_Object t10,
    ILP_Object u11) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = ilp__m1_8;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self9;
 ilp_CurrentArguments[1] = t10;
 ilp_CurrentArguments[2] = u11;

{
{ 
  ILP_Object ilptmp1052; 
ilptmp1052 = self9; 
if ( ILP_IsA(ilptmp1052, Point3D ) ) {
return ilptmp1052->_content.asInstance.field[2];
} else {
return  ILP_UnknownFieldError("z", ilptmp1052);
}
}
}
}

ILP_Object ilp__m1_16(ILP_Closure ilp_useless,
    ILP_Object self13,
    ILP_Object tt14,
    ILP_Object uu15) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = ilp__m1_12;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self13;
 ilp_CurrentArguments[1] = tt14;
 ilp_CurrentArguments[2] = uu15;

{
{ 
  ILP_Object ilptmp1053; 
  ILP_Object ilptmp1054; 
{ 
  ILP_Object ilptmp1055; 
ilptmp1055 = self13; 
if ( ILP_IsA(ilptmp1055, Point4D ) ) {
ilptmp1053 = ilptmp1055->_content.asInstance.field[3];
} else {
ilptmp1053 =  ILP_UnknownFieldError("t", ilptmp1055);
}
}
ilptmp1054 = ILP_FindAndCallSuperMethod(); 
return ILP_Plus(ilptmp1053, ilptmp1054);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1056; 
  ILP_Object ilptmp1057; 
{ 
  ILP_Object ilptmp1058; 
  ILP_Object ilptmp1059; 
  ILP_Object ilptmp1060; 
  ILP_Object ilptmp1061; 
  ILP_Object ilptmp1062; 
ilptmp1059 = ILP_Integer2ILP(-1); 
ilptmp1060 = ILP_Integer2ILP(-2); 
ilptmp1061 = ILP_Integer2ILP(400); 
ilptmp1062 = ILP_Integer2ILP(16); 
ilptmp1058 = ILP_MakeInstance(Point4D); 
ilptmp1058->_content.asInstance.field[0] = ilptmp1059; 
ilptmp1058->_content.asInstance.field[1] = ilptmp1060; 
ilptmp1058->_content.asInstance.field[2] = ilptmp1061; 
ilptmp1058->_content.asInstance.field[3] = ilptmp1062; 
ilptmp1056 = ilptmp1058; 
}
{ 
  ILP_Object ilptmp1063; 
  ILP_Object ilptmp1064; 
  ILP_Object ilptmp1065; 
ilptmp1064 = ILP_Integer2ILP(20); 
ilptmp1065 = ILP_Integer2ILP(1); 
ilptmp1063 = ILP_MakeInstance(Point2D); 
ilptmp1063->_content.asInstance.field[0] = ilptmp1064; 
ilptmp1063->_content.asInstance.field[1] = ilptmp1065; 
ilptmp1057 = ilptmp1063; 
}

  {
    ILP_Object pc417 = ilptmp1056;
    ILP_Object pc218 = ilptmp1057;
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1066; 
  ILP_Object ilptmp1067; 
{ 
  ILP_general_function ilptmp1068; 
  ILP_Object ilptmp1069; 
  ILP_Object ilptmp1070; 
  ILP_Object ilptmp1071; 
ilptmp1069 = pc417; 
ilptmp1070 = ILP_Integer2ILP(-3); 
ilptmp1071 = ILP_Integer2ILP(-4); 
ilptmp1068 = ILP_find_method(ilptmp1069, &ILP_object_m1_method, 3);
ilptmp1066 = ilptmp1068(NULL, ilptmp1069, ilptmp1070, ilptmp1071);
}
{ 
  ILP_general_function ilptmp1072; 
  ILP_Object ilptmp1073; 
  ILP_Object ilptmp1074; 
  ILP_Object ilptmp1075; 
ilptmp1073 = pc218; 
ilptmp1074 = ILP_Integer2ILP(20); 
ilptmp1075 = ILP_Integer2ILP(30); 
ilptmp1072 = ILP_find_method(ilptmp1073, &ILP_object_m1_method, 3);
ilptmp1067 = ilptmp1072(NULL, ilptmp1073, ilptmp1074, ilptmp1075);
}
return ILP_Plus(ilptmp1066, ilptmp1067);
} 
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
          ILP_establish_catcher(&new_catcher); 
          { ILP_Object e19 = ILP_current_exception; 
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
