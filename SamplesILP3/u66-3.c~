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
  ILP_Object ilptmp1567; 
ilptmp1567 = ILP_Integer2ILP(0); 

  {
    ILP_Object x1 = ilptmp1567;
{ 
  ILP_Object ilptmp1568; 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1569; 
{ 
  ILP_Object ilptmp1570; 
{ 
  ILP_Object ilptmp1571; 
  ILP_Object ilptmp1572; 
ilptmp1571 = x1; 
ilptmp1572 = ILP_Integer2ILP(1); 
ilptmp1570 = ILP_Plus(ilptmp1571, ilptmp1572);
} 
ilptmp1569 = (x1 = ilptmp1570); 
} 
{ struct ILP_catcher* current_catcher = ILP_current_catcher; 
  struct ILP_catcher new_catcher;  
  if ( 0 == setjmp(new_catcher._jmp_buf) ) { 
      ILP_establish_catcher(&new_catcher); 
{ 
  ILP_Object ilptmp1573; 
{ 
  ILP_Object ilptmp1574; 
{ 
  ILP_Object ilptmp1575; 
  ILP_Object ilptmp1576; 
ilptmp1575 = x1; 
ilptmp1576 = ILP_Integer2ILP(10); 
ilptmp1574 = ILP_Plus(ilptmp1575, ilptmp1576);
} 
ilptmp1573 = (x1 = ilptmp1574); 
} 
{ 
  ILP_Object ilptmp1577; 
ilptmp1577 = x1; 
ilptmp1573 = ILP_throw(ilptmp1577);
}
ilptmp1569 = ilptmp1573; 
} 
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1578; 
{ 
  ILP_Object ilptmp1579; 
ilptmp1579 = x1; 
ilptmp1578 = ILP_print(ilptmp1579);
}
{ 
  ILP_Object ilptmp1580; 
{ 
  ILP_Object ilptmp1581; 
  ILP_Object ilptmp1582; 
ilptmp1581 = ILP_Integer2ILP(2); 
ilptmp1582 = x1; 
ilptmp1580 = ILP_Times(ilptmp1581, ilptmp1582);
} 
ilptmp1578 = (x1 = ilptmp1580); 
} 
(void)ilptmp1578; 
} 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1569 = ILP_FALSE; 
}
ilptmp1568 = ilptmp1569; 
} 
      ILP_current_exception = NULL; 
  }; 
  ILP_reset_catcher(current_catcher); 
{ 
  ILP_Object ilptmp1583; 
{ 
  ILP_Object ilptmp1584; 
ilptmp1584 = x1; 
ilptmp1583 = ILP_print(ilptmp1584);
}
{ 
  ILP_Object ilptmp1585; 
{ 
  ILP_Object ilptmp1586; 
  ILP_Object ilptmp1587; 
ilptmp1586 = ILP_Integer2ILP(3); 
ilptmp1587 = x1; 
ilptmp1585 = ILP_Times(ilptmp1586, ilptmp1587);
} 
ilptmp1583 = (x1 = ilptmp1585); 
} 
(void)ilptmp1583; 
} 
  if ( NULL != ILP_current_exception ) { 
      ILP_throw(ILP_current_exception); 
  }; 
ilptmp1568 = ILP_FALSE; 
}
{ 
  ILP_Object ilptmp1588; 
  ILP_Object ilptmp1589; 
ilptmp1588 = x1; 
ilptmp1589 = ILP_Integer2ILP(66); 
ilptmp1568 = ILP_Equal(ilptmp1588, ilptmp1589);
} 
return ilptmp1568; 
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
