#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 
ILP_Object quadruple1_23(ILP_Closure ilp_closure,
    ILP_Object n3);
ILP_Object double2_24(ILP_Closure ilp_closure,
    ILP_Object x4);

/* Global functions */ 
ILP_Object quadruple1_23(ILP_Closure ilp_closure,
    ILP_Object n3) {
ILP_Object double2 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp2114; 
  ILP_Object ilptmp2115; 
ilptmp2114 = ILP_Box2Value(double2); 
{ 
  ILP_Object ilptmp2116; 
  ILP_Object ilptmp2117; 
ilptmp2116 = ILP_Box2Value(double2); 
ilptmp2117 = n3; 
ilptmp2115 = ILP_invoke(ilptmp2116, 1, ilptmp2117);
}
return ILP_invoke(ilptmp2114, 1, ilptmp2115);
}
}
ILP_Object double2_24(ILP_Closure ilp_closure,
    ILP_Object x4) {
{ 
  ILP_Object ilptmp2118; 
  ILP_Object ilptmp2119; 
ilptmp2118 = ILP_Integer2ILP(2); 
ilptmp2119 = x4; 
return ILP_Times(ilptmp2118, ilptmp2119);
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp2120; 
  ILP_Object ilptmp2121; 
{ 
  ILP_Object ilptmp2122; 
  ILP_Object ilptmp2123; 
{ 
  ILP_Object quadruple1 = ILP_Value2Box(NULL); 
  ILP_Object double2 = ILP_Value2Box(NULL); 
ILP_SetBoxedValue(quadruple1, ILP_make_closure(quadruple1_23, 1, 1, double2));
ILP_SetBoxedValue(double2, ILP_make_closure(double2_24, 1, 0));
ilptmp2122 = ILP_Box2Value(quadruple1); 

} 
ilptmp2123 = ILP_Integer2ILP(4); 
ilptmp2120 = ILP_invoke(ilptmp2122, 1, ilptmp2123);
}
ilptmp2121 = ILP_Integer2ILP(3); 
return ILP_Plus(ilptmp2120, ilptmp2121);
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
