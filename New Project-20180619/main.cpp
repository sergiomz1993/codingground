/*  escribir una funcion recursiva que calcule un numero elevado a una potencia entera mayor o igual que cero: x^y

    potencia(x,y)=x                  , y=1 caso base donde se eleva igual a 1
                  x*potencia(x,y-1)  , y>1 caso general donde se elava a                           un numero mayor a 1
  
*/   

#include <iostream>
#include <conio.h>

using namespace std;
// protitpo de funcion
int potencia(int,int);

int main(){
    int base,exponente;
    // pedir datos al usuario
    cout<<"digite la base: "; cin>>base;
    cout<<"digite el exponente: ", cin>>exponente;
  
    cout<<"\nPotencia de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;

    getch  ();
    return 0;
}

int potencia(int x,int y){
int pot;

if(y==1){ // caso base
    pot = x;
}
else{ // caso general
    pot = x * potencia(x,y-1);
    }
 return pot;
    
}