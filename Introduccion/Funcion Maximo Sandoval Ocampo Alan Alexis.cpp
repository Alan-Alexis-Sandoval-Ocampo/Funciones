//Sandoval Ocampo Alan Alexis
#include<iostream>
void MAX(int a,int b);
using namespace std;
int main(){
int N1,N2;
cout<< "Introduzca el valor del primer numero: ";
cin>>N1;
cout<< "ntroduzca el valor del segundo numero: ";
cin>>N2;
MAX (N1,N2);
return 0;
}
void MAX(int a,int b){
if (a>b){
cout<< "Es mayor : "<<a;
}
else if(a<b){
cout<< "Es mayor : "<<b;
}
else
{
cout<< "Error";
}
}
