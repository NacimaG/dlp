#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 
ILP_Object fact1_6(ILP_Closure ilp_closure,
    ILP_Object n2);

/* Global functions */ 
ILP_Object fact1_6(ILP_Closure ilp_closure,
    ILP_Object n2) {
ILP_Object fact1 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp1983; 
{ 
  ILP_Object ilptmp1984; 
  ILP_Object ilptmp1985; 
ilptmp1984 = n2; 
ilptmp1985 = ILP_Integer2ILP(1); 
ilptmp1983 = ILP_GreaterThan(ilptmp1984, ilptmp1985);
} 
  if ( ILP_isEquivalentToTrue(ilptmp1983 ) ) {
{ 
  ILP_Object ilptmp1986; 
  ILP_Object ilptmp1987; 
ilptmp1986 = n2; 
{ 
  ILP_Object ilptmp1988; 
  ILP_Object ilptmp1989; 
ilptmp1988 = ILP_Box2Value(fact1); 
{ 
  ILP_Object ilptmp1990; 
  ILP_Object ilptmp1991; 
ilptmp1990 = n2; 
ilptmp1991 = ILP_Integer2ILP(1); 
ilptmp1989 = ILP_Minus(ilptmp1990, ilptmp1991);
} 
ilptmp1987 = ILP_invoke(ilptmp1988, 1, ilptmp1989);
}
return ILP_Times(ilptmp1986, ilptmp1987);
} 

  } else {
return ILP_Integer2ILP(1); 

  }
}
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object fact1 = ILP_Value2Box(NULL); 
ILP_SetBoxedValue(fact1, ILP_make_closure(fact1_6, 1, 1, fact1));
{ 
  ILP_Object ilptmp1992; 
  ILP_Object ilptmp1993; 
{ 
  ILP_Object ilptmp1994; 
  ILP_Object ilptmp1995; 
ilptmp1994 = ILP_Box2Value(fact1); 
ilptmp1995 = ILP_Integer2ILP(4); 
ilptmp1992 = ILP_invoke(ilptmp1994, 1, ilptmp1995);
}
ilptmp1993 = ILP_Integer2ILP(10); 
return ILP_Minus(ilptmp1992, ilptmp1993);
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
