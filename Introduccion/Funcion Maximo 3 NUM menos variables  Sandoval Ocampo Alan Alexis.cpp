//Sandoval Ocampo Alan Alexis
#include<iostream>
int MAX(int a,int b);
using namespace std;
int main(){
int N1,N2,N3;
cout<< "Introduzca el valor del primer numero: ";
cin>>N1;
cout<< "Introduzca el valor del segundo numero: ";
cin>>N2;
cout<< "Introduzca el valor del tercer numero: ";
cin>>N3;
int max1 = MAX(MAX(N1,N2),N3);
cout<< "Es mayor : "<<max1;
return 0;
}

int MAX(int a,int b){
int c;
if (a>b){
    c=a;}

else{
    c=b;
    return c;
}}
