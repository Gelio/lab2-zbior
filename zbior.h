#pragma once
#include <bitset>
using namespace std;

template <unsigned N=32>
class Zbior: public bitset<N> {
public:
	Zbior(unsigned liczba = 0);
	Zbior(char *zbiorBitow) : bitset(zbiorBitow) { };
};

template <unsigned N>
Zbior<N>::Zbior(unsigned liczba) {
	
}

