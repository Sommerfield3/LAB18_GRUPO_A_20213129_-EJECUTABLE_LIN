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

