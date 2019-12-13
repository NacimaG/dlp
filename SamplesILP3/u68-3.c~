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
  ILP_Object ilptmp1669; 
ilptmp1669 = ILP_Integer2ILP(1); 

  {
    ILP_Object x1 = ilptmp1669;
{ 
  ILP_Object ilptmp1670; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1671; 
{ 
  ILP_Object ilptmp1672; 
ilptmp1672 = ILP_Integer2ILP(4); 
ilptmp1671 = ILP_throw(ilptmp1672);
}
{ 
  ILP_Object ilptmp1673; 
ilptmp1673 = ILP_Integer2ILP(44); 
ilptmp1671 = (x1 = ilptmp1673); 
} 
ilptmp1670 = ilptmp1671; 
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
  ILP_Object ilptmp1674; 
{ 
  ILP_Object ilptmp1675; 
  ILP_Object ilptmp1676; 
ilptmp1675 = ILP_Integer2ILP(2); 
ilptmp1676 = exc2; 
ilptmp1674 = ILP_Times(ilptmp1675, ilptmp1676);
} 
(void)ILP_throw(ilptmp1674);
}
          } 
      }; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1677; 
{ 
  ILP_Object ilptmp1678; 
  ILP_Object ilptmp1679; 
ilptmp1678 = ILP_Integer2ILP(3); 
ilptmp1679 = x1; 
ilptmp1677 = ILP_Times(ilptmp1678, ilptmp1679);
} 
(void)(x1 = ilptmp1677); 
} 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1670 = ILP_FALSE; 
}
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
          ILP_establish_catcher(&new_catcher); 
          { ILP_Object exc4 = ILP_current_exception; 
            ILP_current_exception = NULL; 
{ 
  ILP_Object ilptmp1680; 
{ 
  ILP_Object ilptmp1681; 
  ILP_Object ilptmp1682; 
ilptmp1681 = ILP_Integer2ILP(5); 
{ 
  ILP_Object ilptmp1683; 
  ILP_Object ilptmp1684; 
ilptmp1683 = x1; 
ilptmp1684 = exc4; 
ilptmp1682 = ILP_Times(ilptmp1683, ilptmp1684);
} 
ilptmp1680 = ILP_Times(ilptmp1681, ilptmp1682);
} 
(void)(x1 = ilptmp1680); 
} 
          } 
      }; 
  }; 
  ILP_reset_catcher(current_catcher); 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1670 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1685; 
ilptmp1685 = x1; 
ilptmp1670 = ILP_print(ilptmp1685);
}
{ 
  ILP_Object ilptmp1686; 
  ILP_Object ilptmp1687; 
ilptmp1686 = x1; 
ilptmp1687 = ILP_Integer2ILP(120); 
ilptmp1670 = ILP_Equal(ilptmp1686, ilptmp1687);
} 
return ilptmp1670; 
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
