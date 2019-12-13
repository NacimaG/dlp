#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 
ILP_Object double1_20(ILP_Closure ilp_closure,
    ILP_Object x2);

/* Global functions */ 
ILP_Object double1_20(ILP_Closure ilp_closure,
    ILP_Object x2) {
{ 
  ILP_Object ilptmp2098; 
  ILP_Object ilptmp2099; 
ilptmp2098 = ILP_Integer2ILP(2); 
ilptmp2099 = x2; 
return ILP_Times(ilptmp2098, ilptmp2099);
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp2100; 
  ILP_Object ilptmp2101; 
{ 
  ILP_Object ilptmp2102; 
  ILP_Object ilptmp2103; 
{ 
  ILP_Object double1 = ILP_Value2Box(NULL); 
ILP_SetBoxedValue(double1, ILP_make_closure(double1_20, 1, 0));
ilptmp2102 = ILP_Box2Value(double1); 

} 
ilptmp2103 = ILP_Integer2ILP(8); 
ilptmp2100 = ILP_invoke(ilptmp2102, 1, ilptmp2103);
}
ilptmp2101 = ILP_Integer2ILP(2); 
return ILP_Plus(ilptmp2100, ilptmp2101);
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
