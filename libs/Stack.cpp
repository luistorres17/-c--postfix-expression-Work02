#include <iostream>
#include <string>
#include <cstdlib>
#include "Stack.h"
bool empty(Stack *S){
return (S->top==-1);
}
bool push(Stack *S,Tipo valor){
if( S->top == STACKSIZE - 1 )	{return true;}
S->datos[++(S->top)]=valor;{return false;}
}
bool pop (Stack *S, Tipo *valor) {
if(empty(S)==true )	
{return true;}
*(valor)= S->datos[(S->top)--]; 
{return false;}
}
