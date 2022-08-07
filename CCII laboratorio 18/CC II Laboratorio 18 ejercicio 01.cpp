/*1. Suma los d�gitos de un numero de forma recursiva utilizando metaprogramaci�n.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
template <int n>
struct sumaDigitos{
	enum {val=n%10+sumaDigitos<n/10>::val};
};
template<>
struct sumaDigitos<0>{enum {val=0};};
int main(int argc, char *argv[]) {
	const int n=466;
	int x=sumaDigitos<n>::val;
	cout<<"Suma de d�gitos del n�mero "<<n<<": "<<x<<endl;
	return 0;
}

