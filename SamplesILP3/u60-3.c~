#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object print;

/* Global prototypes */ 

/* Global functions */ 


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1423; 
ilptmp1423 = ILP_Integer2ILP(1); 

  {
    ILP_Object x1 = ilptmp1423;
{ 
  ILP_Object ilptmp1424; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1425; 
ilptmp1425 = ILP_Integer2ILP(2); 
ilptmp1424 = (x1 = ilptmp1425); 
} 
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1426; 
ilptmp1426 = x1; 
(void)ILP_print(ilptmp1426);
}
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1424 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1427; 
ilptmp1427 = x1; 
ilptmp1424 = ILP_print(ilptmp1427);
}
{ 
  ILP_Object ilptmp1428; 
  ILP_Object ilptmp1429; 
ilptmp1428 = x1; 
ilptmp1429 = ILP_Integer2ILP(2); 
ilptmp1424 = ILP_Equal(ilptmp1428, ilptmp1429);
} 
return ilptmp1424; 
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
