#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 
ILP_Object ilpclosure4(ILP_Closure ilp_closure,
    ILP_Object y2,
    ILP_Object z3);

/* Global functions */ 
ILP_Object ilpclosure4(ILP_Closure ilp_closure,
    ILP_Object y2,
    ILP_Object z3) {
ILP_Object x1 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp1781; 
  ILP_Object ilptmp1782; 
ilptmp1781 = ILP_Box2Value(x1); 
{ 
  ILP_Object ilptmp1783; 
  ILP_Object ilptmp1784; 
ilptmp1783 = y2; 
ilptmp1784 = z3; 
ilptmp1782 = ILP_Plus(ilptmp1783, ilptmp1784);
} 
return ILP_Plus(ilptmp1781, ilptmp1782);
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1785; 
  ILP_Object ilptmp1786; 
  ILP_Object ilptmp1787; 
{ 
  ILP_Object ilptmp1788; 
ilptmp1788 = ILP_Integer2ILP(500); 

  {
    ILP_Object x1 = ILP_Value2Box(ilptmp1788);
{ 
  ILP_Object ilptmp1789; 
ilptmp1789 = ILP_make_closure(ilpclosure4, 2, 1, x1);

  {
    ILP_Object f5 = ilptmp1789;
ilptmp1785 = f5; 

  }
}

  }
}
ilptmp1786 = ILP_Integer2ILP(7000); 
ilptmp1787 = ILP_Integer2ILP(5); 
return ILP_invoke(ilptmp1785, 2, ilptmp1786, ilptmp1787);
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
