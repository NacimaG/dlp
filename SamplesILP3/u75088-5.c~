#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object mkcounter;
ILP_Object g;

/* Global prototypes */ 
ILP_Object ilp__mkcounter(ILP_Closure ilp_useless
,
    ILP_Object start1);
ILP_Object ilpclosure2(ILP_Closure ilp_closure);

/* Global functions */ 

ILP_Object ilp__mkcounter(ILP_Closure ilp_useless
,
    ILP_Object start1) {
start1 = ILP_Value2Box(start1); 
return ILP_make_closure(ilpclosure2, 0, 1, start1);
}
struct ILP_Closure mkcounter_closure_object = { 
   &ILP_object_Closure_class, 
   { { ilp__mkcounter, 
       1, 
       { NULL } } } 
}; 
ILP_Object ilpclosure2(ILP_Closure ilp_closure) {
ILP_Object start1 = ilp_closure->_content.asClosure.closed_variables[0]; 
{ 
  ILP_Object ilptmp1889; 
{ 
  ILP_Object ilptmp1890; 
{ 
  ILP_Object ilptmp1891; 
  ILP_Object ilptmp1892; 
ilptmp1891 = ILP_Box2Value(start1); 
ilptmp1892 = ILP_Integer2ILP(1); 
ilptmp1890 = ILP_Plus(ilptmp1891, ilptmp1892);
} 
ilptmp1889 = (ILP_SetBoxedValue(start1, ilptmp1890)); 
} 
ilptmp1889 = ILP_Box2Value(start1); 
return ilptmp1889; 
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1893; 
{ 
  ILP_Object ilptmp1894; 
{ 
  ILP_Object ilptmp1895; 
ilptmp1895 = ILP_Integer2ILP(0); 
ilptmp1894 = ilp__mkcounter(NULL , ilptmp1895);
}
ilptmp1893 = (g = ilptmp1894); 
} 
{ 
  ILP_Object ilptmp1896; 
{ 
ilptmp1896 = ILP_invoke(g, 0);
}

  {
    ILP_Object a3 = ilptmp1896;
{ 
  ILP_Object ilptmp1897; 
{ 
ilptmp1897 = ILP_invoke(g, 0);
}

  {
    ILP_Object b4 = ilptmp1897;
{ 
  ILP_Object ilptmp1898; 
  ILP_Object ilptmp1899; 
ilptmp1898 = b4; 
{ 
  ILP_Object ilptmp1900; 
  ILP_Object ilptmp1901; 
ilptmp1900 = a3; 
ilptmp1901 = ILP_Integer2ILP(1); 
ilptmp1899 = ILP_Plus(ilptmp1900, ilptmp1901);
} 
ilptmp1893 = ILP_Equal(ilptmp1898, ilptmp1899);
} 

  }
}

  }
}
return ilptmp1893; 
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
