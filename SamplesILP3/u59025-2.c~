#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object pseudosequence;
ILP_Object foo;

/* Global prototypes */ 
ILP_Object ilp__pseudosequence(ILP_Closure ilp_useless
,
    ILP_Object one1,
    ILP_Object two2);
ILP_Object ilp__foo(ILP_Closure ilp_useless
,
    ILP_Object x3);

/* Global functions */ 

ILP_Object ilp__pseudosequence(ILP_Closure ilp_useless
,
    ILP_Object one1,
    ILP_Object two2) {
return two2; 
}
struct ILP_Closure pseudosequence_closure_object = { 
   &ILP_object_Closure_class, 
   { { ilp__pseudosequence, 
       2, 
       { NULL } } } 
}; 

ILP_Object ilp__foo(ILP_Closure ilp_useless
,
    ILP_Object x3) {
{ 
  ILP_Object ilptmp1408; 
  ILP_Object ilptmp1409; 
ilptmp1408 = ILP_Integer2ILP(2); 
ilptmp1409 = x3; 
return ILP_Times(ilptmp1408, ilptmp1409);
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
  ILP_Object ilptmp1410; 
ilptmp1410 = ILP_Integer2ILP(12); 

  {
    ILP_Object x4 = ilptmp1410;
{ 
  ILP_Object ilptmp1411; 
{ 
  ILP_Object ilptmp1412; 
  ILP_Object ilptmp1413; 
{ 
  ILP_Object ilptmp1414; 
{ 
  ILP_Object ilptmp1415; 
ilptmp1415 = x4; 
ilptmp1414 = ilp__foo(NULL , ilptmp1415);
}
ilptmp1412 = (x4 = ilptmp1414); 
} 
ilptmp1413 = x4; 
ilptmp1411 = ilp__pseudosequence(NULL , ilptmp1412, ilptmp1413);
}
return ilp__foo(NULL , ilptmp1411);
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
