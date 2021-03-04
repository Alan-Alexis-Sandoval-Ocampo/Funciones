//Sandoval Ocampo Alan Alexis
#include<iostream>
int FACTORIAL(int a);
using namespace std;
int main(){
int N1;
cout<< "Introduzca el valor del numero: ";
cin>>N1;
int fact = FACTORIAL (N1);
cout<< "Es factorial es :"<<fact;
return 0;
}

int FACTORIAL(int a){
int i, resultado=1;
for(i=1;i<=a;i++){
    resultado *= i;
}
return resultado;
}
