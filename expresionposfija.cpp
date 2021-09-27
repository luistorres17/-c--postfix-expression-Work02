/*LUIS FERNANDO TORRES OXTE 14001181*/
#include<iostream>
#include<string>
#include "libs/Stack.h"
using namespace std;
Stack S;
string pila;
float var1,var2;
float val_1,val_2;
int var;
int numero;
char caracter;


int main(int argc, char const *argv[])
{
    cout<<"Ingrese una expresion posfija "<<endl;
    cin>>pila;
    var=pila.size();
    for(int i=0;i<var;i++)
    {
        caracter=pila[i];

        if(caracter>='0'  &&  caracter<='9')
        {
            numero=atoi(&caracter);
            push(&S,numero);
        }
        if(caracter =='+')
        { 
            pop(&S,&var1);
            val_1=var1;
            pop(&S,&var2);
            val_2=var2;
            push(&S,val_1+val_2);
        }
        if(caracter == '-')
        { 
            pop(&S,&var1);
            val_1=var1;
            pop(&S,&var2);
            val_2=var2;
            push(&S,val_2-val_1);

        }   
        if(caracter == '/')
        {
            pop(&S,&var1);
            val_1=var1;
            pop(&S,&var2);
            val_2=var2;
            push(&S,(float)(val_2)*(1/float(val_1)));
        }
        if(caracter == '*')
        {
            pop(&S,&var1);
            val_1=var1;
            pop(&S,&var2);
            val_2=var2;
            push(&S,val_1*val_2);
        }
        
        

    }

    float rest;
    pop(&S,&rest);
    cout<<"El resultado de la expresion posfija es = "<<rest<<endl;
    return 0;
}
