#ifndef _STACK_HPP
#define _STACK_HPP

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
#include "string.h"
#include <string>
#include <sstream>
using namespace std;



typedef float Tipo;
const int STACKSIZE=10;
struct Stack{
Tipo datos[STACKSIZE];
int top;
Stack(){top=-1;}
};
bool empty(Stack *S);
bool push(Stack* S,Tipo valor);
bool pop(Stack* S,Tipo *valor);
#endif
