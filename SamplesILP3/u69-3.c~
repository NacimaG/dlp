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
  ILP_Object ilptmp1701; 
ilptmp1701 = ILP_Integer2ILP(1); 

  {
    ILP_Object x1 = ilptmp1701;
{ 
  ILP_Object ilptmp1702; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1703; 
ilptmp1703 = ILP_Integer2ILP(11); 
ilptmp1702 = ILP_throw(ilptmp1703);
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
  ILP_Object ilptmp1704; 
ilptmp1704 = exc2; 
(void)ILP_print(ilptmp1704);
}
          } 
      }; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1705; 
{ 
  ILP_Object ilptmp1706; 
{ 
  ILP_Object ilptmp1707; 
  ILP_Object ilptmp1708; 
ilptmp1707 = ILP_Integer2ILP(3); 
ilptmp1708 = x1; 
ilptmp1706 = ILP_Times(ilptmp1707, ilptmp1708);
} 
ilptmp1705 = ILP_throw(ilptmp1706);
}
{ 
  ILP_Object ilptmp1709; 
ilptmp1709 = ILP_Integer2ILP(55); 
ilptmp1705 = (x1 = ilptmp1709); 
} 
(void)ilptmp1705; 
} 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1702 = ILP_FALSE; 
}
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1710; 
ilptmp1710 = x1; 
(void)ILP_print(ilptmp1710);
}
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1702 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1711; 
ilptmp1711 = x1; 
ilptmp1702 = ILP_print(ilptmp1711);
}
{ 
  ILP_Object ilptmp1712; 
  ILP_Object ilptmp1713; 
ilptmp1712 = x1; 
ilptmp1713 = ILP_Integer2ILP(1); 
ilptmp1702 = ILP_Equal(ilptmp1712, ilptmp1713);
} 
return ilptmp1702; 
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
