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
Prostok�t::Prostok�t(string n, float xx, float yy, float s, float w)
{
	nazwa = n;
	y = yy;
	x = xx;
	szeroko�� = s;
	wysoko�� = w;
}

void Prostok�t::wczytaj()
{
	cout << "Podaj x lewego dolnego naroznika: "; cin >> x;
	cout << "Podaj y lewego dolnego naroznika: "; cin >> y;
	cout << "Podaj szerokosc: "; cin >> szeroko��;
	cout << "Podaj wyskosc: "; cin >> wysoko��;
	cout << "Podaj nazwe prostokata: "; cin >> nazwa;
}


