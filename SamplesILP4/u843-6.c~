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
    ILP_Object t2,
    ILP_Object u3);

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
extern struct ILP_Class3 ILP_object_Point3D_class; 
extern struct ILP_Field ILP_object_z_field; 
ILP_Object ilp__m1_8(ILP_Closure ilp_useless,     ILP_Object self5,
    ILP_Object t6,
    ILP_Object u7);

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
ilp__m1_8, 
 } } }
};

ILP_Object ilp__m1_4(ILP_Closure ilp_useless,
    ILP_Object self1,
    ILP_Object t2,
    ILP_Object u3) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = NULL;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self1;
 ilp_CurrentArguments[1] = t2;
 ilp_CurrentArguments[2] = u3;

{
{ 
  ILP_Object ilptmp876; 
  ILP_Object ilptmp877; 
ilptmp876 = u3; 
{ 
  ILP_Object ilptmp878; 
ilptmp878 = self1; 
if ( ILP_IsA(ilptmp878, Point ) ) {
ilptmp877 = ilptmp878->_content.asInstance.field[0];
} else {
ilptmp877 =  ILP_UnknownFieldError("x", ilptmp878);
}
}
return ILP_Plus(ilptmp876, ilptmp877);
} 
}
}

ILP_Object ilp__m1_8(ILP_Closure ilp_useless,
    ILP_Object self5,
    ILP_Object t6,
    ILP_Object u7) {
static ILP_Method ilp_CurrentMethod = &ILP_object_m1_method;
static ILP_general_function ilp_SuperMethod = ilp__m1_4;
ILP_Object ilp_CurrentArguments[3];
 ilp_CurrentArguments[0] = self5;
 ilp_CurrentArguments[1] = t6;
 ilp_CurrentArguments[2] = u7;

{
{ 
  ILP_Object ilptmp879; 
  ILP_Object ilptmp880; 
{ 
  ILP_Object ilptmp881; 
ilptmp881 = self5; 
if ( ILP_IsA(ilptmp881, Point2D ) ) {
ilptmp879 = ilptmp881->_content.asInstance.field[1];
} else {
ilptmp879 =  ILP_UnknownFieldError("y", ilptmp881);
}
}
{ 
  ILP_Object ilptmp882; 
  ILP_Object ilptmp883; 
ilptmp882 = t6; 
{ 
  ILP_Object ilptmp884; 
  ILP_Object ilptmp885; 
{ 
  ILP_Object ilptmp886; 
ilptmp886 = self5; 
if ( ILP_IsA(ilptmp886, Point3D ) ) {
ilptmp884 = ilptmp886->_content.asInstance.field[2];
} else {
ilptmp884 =  ILP_UnknownFieldError("z", ilptmp886);
}
}
ilptmp885 = ILP_FindAndCallSuperMethod(); 
ilptmp883 = ILP_Times(ilptmp884, ilptmp885);
} 
ilptmp880 = ILP_Plus(ilptmp882, ilptmp883);
} 
return ILP_Plus(ilptmp879, ilptmp880);
} 
}
}


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp887; 
{ 
  ILP_Object ilptmp888; 
  ILP_Object ilptmp889; 
  ILP_Object ilptmp890; 
  ILP_Object ilptmp891; 
ilptmp889 = ILP_Integer2ILP(8); 
ilptmp890 = ILP_Integer2ILP(-1); 
ilptmp891 = ILP_Integer2ILP(84); 
ilptmp888 = ILP_MakeInstance(Point3D); 
ilptmp888->_content.asInstance.field[0] = ilptmp889; 
ilptmp888->_content.asInstance.field[1] = ilptmp890; 
ilptmp888->_content.asInstance.field[2] = ilptmp891; 
ilptmp887 = ilptmp888; 
}

  {
    ILP_Object pc9 = ilptmp887;
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_general_function ilptmp892; 
  ILP_Object ilptmp893; 
  ILP_Object ilptmp894; 
  ILP_Object ilptmp895; 
ilptmp893 = pc9; 
ilptmp894 = ILP_Integer2ILP(4); 
ilptmp895 = ILP_Integer2ILP(2); 
ilptmp892 = ILP_find_method(ilptmp893, &ILP_object_m1_method, 3);
return ilptmp892(NULL, ilptmp893, ilptmp894, ilptmp895);
}
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
          ILP_establish_catcher(&new_catcher); 
          { ILP_Object e10 = ILP_current_exception; 
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
