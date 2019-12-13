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
  ILP_Object ilptmp1449; 
ilptmp1449 = ILP_Integer2ILP(1); 

  {
    ILP_Object x1 = ilptmp1449;
{ 
  ILP_Object ilptmp1450; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1451; 
ilptmp1451 = ILP_Integer2ILP(3); 
ilptmp1450 = ILP_throw(ilptmp1451);
}
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1452; 
ilptmp1452 = ILP_Integer2ILP(4); 
(void)(x1 = ilptmp1452); 
} 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1450 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1453; 
ilptmp1453 = x1; 
ilptmp1450 = ILP_print(ilptmp1453);
}
{ 
  ILP_Object ilptmp1454; 
  ILP_Object ilptmp1455; 
ilptmp1454 = x1; 
ilptmp1455 = ILP_Integer2ILP(4); 
ilptmp1450 = ILP_Equal(ilptmp1454, ilptmp1455);
} 
return ilptmp1450; 
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
