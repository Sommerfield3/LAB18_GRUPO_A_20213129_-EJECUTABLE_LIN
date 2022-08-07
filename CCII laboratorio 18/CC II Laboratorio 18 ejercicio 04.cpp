/*4. Construya una función recursiva que convierta un número decimal en una cadena
que represente el valor del número en hexadecimal (base 16) utilizando
metaprogramación.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
#include <math.h>

using namespace std;

template<int n>

struct DecimalAHexadecimal{
	enum{
		val1 = (n%16>=0 && n%16<=9)?(48+n%16):(55+n%16),/*ASCII valor*/
			val = val1 + DecimalAHexadecimal<n/16>::val*100
	};
};
template<>
struct DecimalAHexadecimal<0>{
	enum{val = 0};
};

int numDigitos(int num){
	int cont=0;
	while(num>0){
		num /= 10;
		cont++;
	}
	return cont;
}
string numAString(int num){
	int aux = num;
	int tam = numDigitos(num)/2;
	string resulString;
	for(int i = pow(100,tam)/10;i>=1;i/=100){
		int x = (aux/i)*10 + aux/(i/10)%10;
		aux -= x * (i/10);
		resulString += char(x);
	}
	return resulString;
}

int main(int argc, char *argv[]){
	int a = DecimalAHexadecimal<3477>::val;
	string cadenaA = numAString(a);
	cout <<"El número decimal "<<a<<"en el sistema hexadecimal es: "<<cadenaA<< endl;
	int b = DecimalAHexadecimal<7659>::val;
	string cadenaB = numAString(b);
	cout <<"El número decimal "<<b<<"en el sistema hexadecimal es: "<<cadenaB<< endl;
	
	return 0;
}/* Versión fallida con solo templates: 
#include <iostream>
using namespace std;

template <int const x>
struct DecimalAHexadecimal{
	static const char * const a=(DecimalAHexadecimal<x/16>::a)+(DecimalAHexadecimal<x%16>::a);
};
template <>
struct DecimalAHexadecimal<0>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<0>::a = "0";

template <>
struct DecimalAHexadecimal<1>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<1>::a = "1";
template <>
struct DecimalAHexadecimal<2>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<2>::a = "2";
template <>
struct DecimalAHexadecimal<3>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<3>::a = "3";
template <>
struct DecimalAHexadecimal<4>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<4>::a = "4";
template <>
struct DecimalAHexadecimal<5>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<5>::a = "5";
template <>
struct DecimalAHexadecimal<6>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<6>::a = "6";
template <>
struct DecimalAHexadecimal<7>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<7>::a = "7";
template <>
struct DecimalAHexadecimal<8>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<8>::a = "8";
template <>
struct DecimalAHexadecimal<9>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<9>::a = "9";
template <>
struct DecimalAHexadecimal<10>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<10>::a = "A";
template <>
struct DecimalAHexadecimal<11>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<11>::a = "B";
template <>
struct DecimalAHexadecimal<12>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<12>::a = "C";
template <>
struct DecimalAHexadecimal<13>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<13>::a = "D";
template <>
struct DecimalAHexadecimal<14>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<14>::a = "E";
template <>
struct DecimalAHexadecimal<15>
{
	static const char * const a;
};
const char* const DecimalAHexadecimal<15>::a = "F";



int main(int argc, char *argv[]) {
	const int num=54;
	string Hexa=DecimalAHexadecimal<num>::a;
	return 0;
}
*/
