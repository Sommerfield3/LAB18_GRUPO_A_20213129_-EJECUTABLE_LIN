/*3. Calcula la potencia de un numero de forma recursiva utilizando
metaprogramaci�n.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
template <int m, int n>
struct potencia{
	enum {val=m*potencia<m,n-1>::val};
};
template <int m>
struct potencia<m,0>{
	enum{val=1};
};
int main(int argc, char *argv[]) {
	const int m=5;
	const int n=5;
	int x=potencia<m,n>::val;
	cout<<"N�mero "<<m<<" a la potencia "<<n<<": "<<x<<endl;
	return 0;
}

