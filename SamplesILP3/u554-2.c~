#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object foo;

/* Global prototypes */ 
ILP_Object ilp__foo(ILP_Closure ilp_useless
,
    ILP_Object x1);

/* Global functions */ 

ILP_Object ilp__foo(ILP_Closure ilp_useless
,
    ILP_Object x1) {
{ 
  ILP_Object ilptmp1333; 
  ILP_Object ilptmp1334; 
ilptmp1333 = x1; 
ilptmp1334 = ILP_Integer2ILP(2); 
return ILP_Times(ilptmp1333, ilptmp1334);
} 
}
struct ILP_Closure foo_closure_object = { 
   &ILP_object_Closure_class, 
   { { ilp__foo, 
       1, 
       { NULL } } } 
}; 


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1335; 
{ 
  ILP_Object ilptmp1336; 
  ILP_Object ilptmp1337; 
ilptmp1336 = ILP_Integer2ILP(1); 
ilptmp1337 = ILP_Integer2ILP(2); 
ilptmp1335 = ILP_Equal(ilptmp1336, ilptmp1337);
} 
  if ( ILP_isEquivalentToTrue(ilptmp1335 ) ) {
return ILP_Integer2ILP(554); 

  } else {
{ 
  ILP_Object ilptmp1338; 
{ 
  ILP_Object ilptmp1339; 
  ILP_Object ilptmp1340; 
ilptmp1339 = ILP_Integer2ILP(2); 
ilptmp1340 = ILP_Integer2ILP(3); 
ilptmp1338 = ILP_Equal(ilptmp1339, ilptmp1340);
} 
  if ( ILP_isEquivalentToTrue(ilptmp1338 ) ) {
return ILP_Integer2ILP(-554); 

  } else {
{ 
  ILP_Object ilptmp1341; 
ilptmp1341 = ILP_Integer2ILP(554); 
return ilp__foo(NULL , ilptmp1341);
}

  }
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
