/*5. Ingresar un n�mero y mostrar su equivalente en binario usando una funci�n
recursiva utilizando metaprogramaci�n.*/
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
	cout<<"El n�mero decimal "<<numero<<" en el sistema binario es: "<<numeroEnBinario;
	return 0;
}
