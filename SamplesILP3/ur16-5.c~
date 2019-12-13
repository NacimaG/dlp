#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 
ILP_Object fact1_13(ILP_Closure ilp_closure,
    ILP_Object n3);
ILP_Object double2_14(ILP_Closure ilp_closure,
    ILP_Object x4);

/* Global functions */ 
ILP_Object fact1_13(ILP_Closure ilp_closure,
    ILP_Object n3) {
ILP_Object fact1 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp2043; 
{ 
  ILP_Object ilptmp2044; 
  ILP_Object ilptmp2045; 
ilptmp2044 = n3; 
ilptmp2045 = ILP_Integer2ILP(1); 
ilptmp2043 = ILP_GreaterThan(ilptmp2044, ilptmp2045);
} 
  if ( ILP_isEquivalentToTrue(ilptmp2043 ) ) {
{ 
  ILP_Object ilptmp2046; 
  ILP_Object ilptmp2047; 
ilptmp2046 = n3; 
{ 
  ILP_Object ilptmp2048; 
  ILP_Object ilptmp2049; 
ilptmp2048 = ILP_Box2Value(fact1); 
{ 
  ILP_Object ilptmp2050; 
  ILP_Object ilptmp2051; 
ilptmp2050 = n3; 
ilptmp2051 = ILP_Integer2ILP(1); 
ilptmp2049 = ILP_Minus(ilptmp2050, ilptmp2051);
} 
ilptmp2047 = ILP_invoke(ilptmp2048, 1, ilptmp2049);
}
return ILP_Times(ilptmp2046, ilptmp2047);
} 

  } else {
return ILP_Integer2ILP(1); 

  }
}
}
ILP_Object double2_14(ILP_Closure ilp_closure,
    ILP_Object x4) {
{ 
  ILP_Object ilptmp2052; 
  ILP_Object ilptmp2053; 
ilptmp2052 = ILP_Integer2ILP(2); 
ilptmp2053 = x4; 
return ILP_Times(ilptmp2052, ilptmp2053);
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object fact1 = ILP_Value2Box(NULL); 
  ILP_Object double2 = ILP_Value2Box(NULL); 
ILP_SetBoxedValue(fact1, ILP_make_closure(fact1_13, 1, 1, fact1));
ILP_SetBoxedValue(double2, ILP_make_closure(double2_14, 1, 0));
{ 
  ILP_Object ilptmp2054; 
  ILP_Object ilptmp2055; 
{ 
  ILP_Object ilptmp2056; 
  ILP_Object ilptmp2057; 
ilptmp2056 = ILP_Box2Value(double2); 
{ 
  ILP_Object ilptmp2058; 
  ILP_Object ilptmp2059; 
ilptmp2058 = ILP_Box2Value(fact1); 
ilptmp2059 = ILP_Integer2ILP(3); 
ilptmp2057 = ILP_invoke(ilptmp2058, 1, ilptmp2059);
}
ilptmp2054 = ILP_invoke(ilptmp2056, 1, ilptmp2057);
}
ilptmp2055 = ILP_Integer2ILP(4); 
return ILP_Plus(ilptmp2054, ilptmp2055);
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
