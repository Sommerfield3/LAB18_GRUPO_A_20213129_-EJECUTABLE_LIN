/*1. Suma los dígitos de un numero de forma recursiva utilizando metaprogramación.*/
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
	cout<<"Suma de dígitos del número "<<n<<": "<<x<<endl;
	return 0;
}

