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
  ILP_Object ilptmp1487; 
ilptmp1487 = ILP_Integer2ILP(1); 

  {
    ILP_Object x1 = ilptmp1487;
{ 
  ILP_Object ilptmp1488; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1489; 
{ 
  ILP_Object ilptmp1490; 
ilptmp1490 = ILP_Integer2ILP(6); 
ilptmp1489 = ILP_throw(ilptmp1490);
}
{ 
  ILP_Object ilptmp1491; 
ilptmp1491 = ILP_Integer2ILP(4); 
ilptmp1489 = (x1 = ilptmp1491); 
} 
ilptmp1488 = ilptmp1489; 
} 
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
          ILP_establish_catcher(&new_catcher); 
          { ILP_Object exc2 = ILP_current_exception; 
            ILP_current_exception = NULL; 
{ 
  ILP_Object ilptmp1492; 
ilptmp1492 = exc2; 
(void)(x1 = ilptmp1492); 
} 
          } 
      }; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1488 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1493; 
ilptmp1493 = x1; 
ilptmp1488 = ILP_print(ilptmp1493);
}
{ 
  ILP_Object ilptmp1494; 
  ILP_Object ilptmp1495; 
ilptmp1494 = x1; 
ilptmp1495 = ILP_Integer2ILP(6); 
ilptmp1488 = ILP_Equal(ilptmp1494, ilptmp1495);
} 
return ilptmp1488; 
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
