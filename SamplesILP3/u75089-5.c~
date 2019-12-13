#include <stdio.h> 
#include <stdlib.h> 
#include "ilp.h" 

/* Global variables */ 
ILP_Object mkcounter;

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
  ILP_Object ilptmp1922; 
{ 
  ILP_Object ilptmp1923; 
{ 
  ILP_Object ilptmp1924; 
  ILP_Object ilptmp1925; 
ilptmp1924 = ILP_Box2Value(start1); 
ilptmp1925 = ILP_Integer2ILP(1); 
ilptmp1923 = ILP_Plus(ilptmp1924, ilptmp1925);
} 
ilptmp1922 = (ILP_SetBoxedValue(start1, ilptmp1923)); 
} 
ilptmp1922 = ILP_Box2Value(start1); 
return ilptmp1922; 
} 
}


/* Classes */ 


ILP_Object ilp_program () 
{ 
{ 
  ILP_Object ilptmp1926; 
  ILP_Object ilptmp1927; 
{ 
  ILP_Object ilptmp1928; 
ilptmp1928 = ILP_Integer2ILP(0); 
ilptmp1926 = ilp__mkcounter(NULL , ilptmp1928);
}
{ 
  ILP_Object ilptmp1929; 
ilptmp1929 = ILP_Integer2ILP(10); 
ilptmp1927 = ilp__mkcounter(NULL , ilptmp1929);
}

  {
    ILP_Object c13 = ilptmp1926;
    ILP_Object c24 = ilptmp1927;
{ 
  ILP_Object ilptmp1930; 
{ 
  ILP_Object ilptmp1931; 
ilptmp1931 = c13; 
ilptmp1930 = ILP_invoke(ilptmp1931, 0);
}
{ 
  ILP_Object ilptmp1932; 
ilptmp1932 = c24; 
ilptmp1930 = ILP_invoke(ilptmp1932, 0);
}
{ 
  ILP_Object ilptmp1933; 
ilptmp1933 = c24; 
ilptmp1930 = ILP_invoke(ilptmp1933, 0);
}
{ 
  ILP_Object ilptmp1934; 
ilptmp1934 = c13; 
ilptmp1930 = ILP_invoke(ilptmp1934, 0);
}
{ 
  ILP_Object ilptmp1935; 
ilptmp1935 = c24; 
ilptmp1930 = ILP_invoke(ilptmp1935, 0);
}
{ 
  ILP_Object ilptmp1936; 
  ILP_Object ilptmp1937; 
{ 
  ILP_Object ilptmp1938; 
  ILP_Object ilptmp1939; 
ilptmp1938 = ILP_Integer2ILP(11); 
{ 
  ILP_Object ilptmp1940; 
ilptmp1940 = c13; 
ilptmp1939 = ILP_invoke(ilptmp1940, 0);
}
ilptmp1936 = ILP_Plus(ilptmp1938, ilptmp1939);
} 
{ 
  ILP_Object ilptmp1941; 
ilptmp1941 = c24; 
ilptmp1937 = ILP_invoke(ilptmp1941, 0);
}
ilptmp1930 = ILP_Equal(ilptmp1936, ilptmp1937);
} 
return ilptmp1930; 
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
