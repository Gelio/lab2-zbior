#include <iostream>
#include "zbior.h"

using namespace std;

void main()
{
	
    cout<<endl<<"Konstruktory"<<endl;
    Zbior<> z;
    Zbior<> z2(2);
    Zbior<> z3(3);
    Zbior<> z12356("1101110");
    //cout << z << endl;       //  { }
    //cout << z2 << endl;      //  { 2 }
    //cout << z3 << endl;      //  { 3 }
    //cout << z12356 << endl;  //  { 1 , 2 , 3 , 5 , 6 }

    //cout << endl << "Suma, iloczyn, roznica" << endl;
    //Zbior<> z23;
    //Zbior<> z156;
    //Zbior<> zz;
    //z23  = z2+z3;
    //zz   = z2*z3;
    //z156 = z12356-z23;
    //cout << z23 << endl;     //  { 2 , 3 }
    //cout << zz << endl;      //  { }
    //cout << z156 << endl;    //  { 1 , 5 , 6 }

    //cout << endl << "Wstawianie i usuwanie elementu" << endl;
    //z23+=4;
    //z156-=6;
    //cout << z23 << endl;     //  { 2 , 3 , 4 }
    //cout << z156 << endl;    //  { 1 , 5 }

    //cout << endl << "Zawieranie" << endl;
    //bool b1= z156<=z12356;
    //bool b2= z23<=z12356;
    //cout << b1 << endl;           //  1
    //cout << b2 << endl;           //  0
    //cout << (z23>=z) << endl;     //  1
    //cout << (z23>=z156) << endl;  //  0

    //cout << endl << "Dopelnienie" << endl;
    //Zbior<8> d1("1010101");
    //Zbior<8> d2;
    //d2=~d1;
    //cout << d1 << endl;      //  { 0 , 2 , 4 , 6 }
    //cout << d2 << endl;      //  { 1 , 3 , 5 , 7 }

    //cout << endl << "Metody" << endl;
    //cout << z.empty() << endl;    //  1
    //cout << z23.empty() << endl;  //  0
    //cout << z.count() << endl;    //  0
    //cout << z23.count() << endl;  //  3

    //cout << endl << "Wyjasnij to" << endl;
    //Zbior<> x, y;
    //x=x+1+2+3+4+5+6+7;
    //y+=1+2+3+4+5+6+7;
    //cout << x << endl;       // { 1 , 2 , 3 , 4 , 5 , 6 , 7 }
    //cout << y << endl;       // { 28 }


	//cout<<"Tu napisz kawalek kodu sprawdzajacy czy liczba 2 nalezy do zbioru z23, ma byc jak najprostszy !!!"<<endl<<((z23.z[3]) ? "Nalezy" : "Nie nalezy")<<endl;

    cout << endl;

}