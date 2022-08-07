/*2. Calcular el valor de la posición fibonacci usando recursividad utilizando
metaprogramación.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
template <int n>
struct  Fibonacci{
	enum {val=Fibonacci<n-1>::val + Fibonacci<n-2>::val};
};
template<>
struct  Fibonacci<1>{
	enum {val=0};
};
template<>
struct  Fibonacci<2>{
	enum {val=1};
};
int main(int argc, char *argv[]) {
	const int n=4;
	int x=Fibonacci<n>::val;
	cout<<"Posición "<<n<<" en la serie de Fibonacci (empezando con 0 y 1): "<<x<<endl;
	const int m=5;
	int y=Fibonacci<m>::val;
	cout<<"Posición "<<m<<" en la serie de Fibonacci (empezando con 0 y 1): "<<y<<endl;
	/*0, 1, 1, 2, 3, 5, 8, 13, 21*/
	return 0;
}

