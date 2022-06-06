#include <iostream> 
using namespace std;

class Prostokąt;

class Punkt
{
	string nazwa;
	float x, y;
	
public:
	Punkt(string = "A", float = 0, float = 0);
	void wczytaj();

	friend void sedzia (Punkt pkt, Prostokąt p);
};
class Prostokąt
{
	string nazwa;
	float x, y, szerokość, wysokość;

public:
	Prostokąt(string = "brak", float = 0, float = 0, float = 1, float = 1);
	void wczytaj();

	friend void sedzia(Punkt pkt, Prostokąt p);
};
