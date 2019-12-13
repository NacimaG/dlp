#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 

/* Global prototypes */ 
ILP_Object odd1_29(ILP_Closure ilp_closure,
    ILP_Object n3);
ILP_Object even2_30(ILP_Closure ilp_closure,
    ILP_Object n4);

/* Global functions */ 
ILP_Object odd1_29(ILP_Closure ilp_closure,
    ILP_Object n3) {
ILP_Object even2 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp2167; 
{ 
  ILP_Object ilptmp2168; 
  ILP_Object ilptmp2169; 
ilptmp2168 = n3; 
ilptmp2169 = ILP_Integer2ILP(0); 
ilptmp2167 = ILP_Equal(ilptmp2168, ilptmp2169);
} 
  if ( ILP_isEquivalentToTrue(ilptmp2167 ) ) {
return ILP_FALSE; 

  } else {
{ 
  ILP_Object ilptmp2170; 
  ILP_Object ilptmp2171; 
ilptmp2170 = ILP_Box2Value(even2); 
{ 
  ILP_Object ilptmp2172; 
  ILP_Object ilptmp2173; 
ilptmp2172 = n3; 
ilptmp2173 = ILP_Integer2ILP(1); 
ilptmp2171 = ILP_Minus(ilptmp2172, ilptmp2173);
} 
return ILP_invoke(ilptmp2170, 1, ilptmp2171);
}

  }
}
}
ILP_Object even2_30(ILP_Closure ilp_closure,
    ILP_Object n4) {
ILP_Object odd1 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp2174; 
{ 
  ILP_Object ilptmp2175; 
  ILP_Object ilptmp2176; 
ilptmp2175 = n4; 
ilptmp2176 = ILP_Integer2ILP(0); 
ilptmp2174 = ILP_LessThanOrEqual(ilptmp2175, ilptmp2176);
} 
  if ( ILP_isEquivalentToTrue(ilptmp2174 ) ) {
return ILP_TRUE; 

  } else {
{ 
  ILP_Object ilptmp2177; 
  ILP_Object ilptmp2178; 
ilptmp2177 = ILP_Box2Value(odd1); 
{ 
  ILP_Object ilptmp2179; 
  ILP_Object ilptmp2180; 
ilptmp2179 = n4; 
ilptmp2180 = ILP_Integer2ILP(1); 
ilptmp2178 = ILP_Minus(ilptmp2179, ilptmp2180);
} 
return ILP_invoke(ilptmp2177, 1, ilptmp2178);
}

  }
}
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp2181; 
{ 
  ILP_Object ilptmp2182; 
  ILP_Object ilptmp2183; 
{ 
  ILP_Object odd1 = ILP_Value2Box(NULL); 
  ILP_Object even2 = ILP_Value2Box(NULL); 
ILP_SetBoxedValue(odd1, ILP_make_closure(odd1_29, 1, 1, even2));
ILP_SetBoxedValue(even2, ILP_make_closure(even2_30, 1, 1, odd1));
ilptmp2182 = ILP_Box2Value(even2); 

} 
ilptmp2183 = ILP_Integer2ILP(4); 
ilptmp2181 = ILP_invoke(ilptmp2182, 1, ilptmp2183);
}
  if ( ILP_isEquivalentToTrue(ilptmp2181 ) ) {
return ILP_Integer2ILP(21); 

  } else {
return ILP_FALSE; 

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
