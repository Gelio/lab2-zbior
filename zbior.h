#pragma once
#include <iostream>
#include <bitset>
using namespace std;

template <unsigned N=32>
class Zbior: public bitset<N> {
public:
	Zbior(int liczba = -1);
	Zbior(char *zbiorBitow) : bitset(zbiorBitow) { };
	Zbior(bitset<N> zbiorBitow) : bitset(zbiorBitow) { };

	bool empty() const;
	unsigned count() const;
};

template <unsigned N>
Zbior<N>::Zbior(int liczba) : bitset(0) {
	if (liczba < 0 || liczba > N - 1) {
		return;
	}

	
	(*this)[liczba] = 1;
}


template <unsigned N>
ostream& operator<<(ostream &os, Zbior<N>& zb) {
	if (zb.empty()) {
		return os << "{ }";
	}

	// Zbior niepusty
	bool wstawPrzecinek = false;

	os << "{ ";
	for (int i = 0; i < N; i++) {
		if (zb[i]) {
			if (wstawPrzecinek) {
				os << ", ";
			}

			os << i;
			wstawPrzecinek = true;
		}
	}

	return os << " }";
}

template <unsigned N>
Zbior<N> operator+(Zbior<N>& z1, Zbior<N>& z2) {
	return z1 | z2;
}

template <unsigned N>
Zbior<N> operator+(Zbior<N> z1, int liczba) {
	z1[liczba] = true;
	return z1;
}

template <unsigned N>
Zbior<N> operator-(Zbior<N>& z1, Zbior<N> z2) {
	// Wazne: z2 nie jest referencja, bo uzywamy flip,
	// ktore zmutowaloby zawartosc z2.
	// Stad z2 musi byc przeslane jako kopia.
	// Alternatywnie moznaby tworzyc kopie lokalnie,
	// ale nie ma potrzeby jak mozna zrobic tak jak tu.
	return z1 & z2.flip();
}

template <unsigned N>
Zbior<N> operator*(Zbior<N>& z1, Zbior<N>& z2) {
	return z1 & z2;
}

template <unsigned N>
Zbior<N>& operator+=(Zbior<N>& z1, int liczba) {
	z1[liczba] = true;
	return z1;
}

template <unsigned N>
Zbior<N>& operator-=(Zbior<N>& z1, int liczba) {
	z1[liczba] = false;
	return z1;
}

template <unsigned N>
bool operator<=(Zbior<N>& z1, Zbior<N>& z2) {
	return (z1 * z2).count() == z1.count();
}

template <unsigned N>
bool operator>=(Zbior<N>& z1, Zbior<N>& z2) {
	return (z1 * z2).count() == z2.count();
}

template <unsigned N>
Zbior<N> operator~(Zbior<N> zbior) {
	// Znowu uzywamy funkcji mutujacej (flip),
	// wiec musimy dzialac na kopii, a nie referencji do `zbior`
	return zbior.flip();
}

template <unsigned N>
bool Zbior<N>::empty() const {
	return count() == 0;
}

template <unsigned N>
unsigned Zbior<N>::count() const {
	return static_cast<bitset>(*this).count();
}