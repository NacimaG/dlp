#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object print;
ILP_Object throw;

/* Global prototypes */ 

/* Global functions */ 


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1467; 
ilptmp1467 = ILP_Integer2ILP(1); 

  {
    ILP_Object x1 = ilptmp1467;
{ 
  ILP_Object ilptmp1468; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1469; 
{ 
  ILP_Object ilptmp1470; 
ilptmp1470 = ILP_Integer2ILP(11); 
ilptmp1469 = ILP_throw(ilptmp1470);
}
{ 
  ILP_Object ilptmp1471; 
ilptmp1471 = ILP_Integer2ILP(4); 
ilptmp1469 = (x1 = ilptmp1471); 
} 
ilptmp1468 = ilptmp1469; 
} 
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1472; 
{ 
  ILP_Object ilptmp1473; 
  ILP_Object ilptmp1474; 
ilptmp1473 = ILP_Integer2ILP(4); 
ilptmp1474 = x1; 
ilptmp1472 = ILP_Plus(ilptmp1473, ilptmp1474);
} 
(void)(x1 = ilptmp1472); 
} 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1468 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1475; 
ilptmp1475 = x1; 
ilptmp1468 = ILP_print(ilptmp1475);
}
{ 
  ILP_Object ilptmp1476; 
  ILP_Object ilptmp1477; 
ilptmp1476 = x1; 
ilptmp1477 = ILP_Integer2ILP(5); 
ilptmp1468 = ILP_Equal(ilptmp1476, ilptmp1477);
} 
return ilptmp1468; 
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
