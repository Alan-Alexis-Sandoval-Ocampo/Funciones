//Sandoval Ocampo Alan Alexis
#include<iostream>
void SUMA(int a,int b);
using namespace std;
int main(){
int N1,N2;
cout<< "Introduzca el primer valor : ";
cin>>N1;
cout<< "Introduzca el segundo valor : ";
cin>>N2;
SUMA (N1,N2);
return 0;
}
void SUMA(int a,int b){
int c= a + b;
cout<< "El resultado de la suma es : "<<c ;
}
