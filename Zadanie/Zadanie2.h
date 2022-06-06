#include <iostream>
#include "Zadanie.cpp"
using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{
	nazwa = n;
	x = xx;
	y = yy;
}

void Punkt::wczytaj()
{
	cout << "Podaj x: "; cin >> x;
	cout << "Podaj y: "; cin >> y;
	cout << "Nazwa punktu: "; cin >> nazwa;
}
Prostok¹t::Prostok¹t(string n, float xx, float yy, float s, float w)
{
	nazwa = n;
	y = yy;
	x = xx;
	szerokoœæ = s;
	wysokoœæ = w;
}

void Prostok¹t::wczytaj()
{
	cout << "Podaj x lewego dolnego naroznika: "; cin >> x;
	cout << "Podaj y lewego dolnego naroznika: "; cin >> y;
	cout << "Podaj szerokosc: "; cin >> szerokoœæ;
	cout << "Podaj wyskosc: "; cin >> wysokoœæ;
	cout << "Podaj nazwe prostokata: "; cin >> nazwa;
}


