#include <iostream>
#include "Zadanie.cpp"
using namespace std;

void sedzia(Punkt pkt, Prostok�t p)
{
	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szeroko��) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysoko��))
		cout << endl << "Punkt " << pkt.nazwa << " nalezy do prostokata: " << p.nazwa;
	else
		cout << endl << "Punkt " << pkt.nazwa << " lezy poza prostokatem: " << p.nazwa;

}

int main()
{
	Punkt pkt1("A",3,1);
	pkt1.wczytaj();

	Prostok�t p1("Prostokat",0,0,6,4);
	p1.wczytaj();
	
	sedzia(pkt1, p1);

	return 0;
};

