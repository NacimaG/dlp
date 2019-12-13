#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object g;

/* Global prototypes */ 
ILP_Object ilpclosure3(ILP_Closure ilp_closure,
    ILP_Object y2);

/* Global functions */ 
ILP_Object ilpclosure3(ILP_Closure ilp_closure,
    ILP_Object y2) {
ILP_Object x1 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp1742; 
  ILP_Object ilptmp1743; 
ilptmp1742 = ILP_Box2Value(x1); 
ilptmp1743 = y2; 
return ILP_Plus(ilptmp1742, ilptmp1743);
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1744; 
{ 
  ILP_Object ilptmp1745; 
ilptmp1745 = ILP_Integer2ILP(21); 

  {
    ILP_Object x1 = ILP_Value2Box(ilptmp1745);
{ 
  ILP_Object ilptmp1746; 
ilptmp1746 = ILP_make_closure(ilpclosure3, 1, 1, x1);
ilptmp1744 = (g = ilptmp1746); 
} 

  }
}
{ 
  ILP_Object ilptmp1747; 
ilptmp1747 = ILP_Integer2ILP(75000); 
ilptmp1744 = ILP_invoke(g, 1, ilptmp1747);
}
return ilptmp1744; 
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
