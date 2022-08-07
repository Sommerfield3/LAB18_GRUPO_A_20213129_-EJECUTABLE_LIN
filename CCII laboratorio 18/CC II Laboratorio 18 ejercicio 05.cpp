/*5. Ingresar un número y mostrar su equivalente en binario usando una función
recursiva utilizando metaprogramación.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
template<int num>
struct DecimalARepresentacionBinaria{
	enum{val = num%2+DecimalARepresentacionBinaria<num/2>::val*10,};
};
template <>
struct DecimalARepresentacionBinaria<0>{enum{val=0};};
template <>
struct DecimalARepresentacionBinaria<1>{enum{val=1};};

int main(){
	const int numero=11;
	long numeroEnBinario=DecimalARepresentacionBinaria<numero>::val;
	cout<<"El número decimal "<<numero<<" en el sistema binario es: "<<numeroEnBinario;
	return 0;
}
