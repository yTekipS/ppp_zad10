#include <iostream>

using namespace std;
/*
class Prostokat{
protected:
	float Pole(float bokA, float bokB) {
		return bokA * bokB;
	}
};

class Prostopadloscian : public Prostokat {
private:
	float krawedzA = 1, krawedzB = 1, krawedzC = 1;
public:
	float Objetosc() {
		return krawedzA * krawedzB * krawedzC;
	}
	float PolePowierzchni() {
		return 2 * (Pole(krawedzA, krawedzB) + Pole(krawedzA, krawedzC) + Pole(krawedzB, krawedzC));
	}
	Prostopadloscian(float a, float b, float c) {
		this->krawedzA = a; 
		this->krawedzB = b;
		this->krawedzC = c;
	}
	Prostopadloscian(){}
};

class Szescian : public Prostopadloscian {
private:
	float a=1;
public:
	float PolePowierzchni() {
		return 6 * (Pole(a, a));
	}
	float Objetosc() {
		return pow(a, 3);
	}
	Szescian(float a) {
		this->a = a;
	}
};
*/

class Kopula {
protected:
	float Promien = 1;
public:
	float Pole();
	Kopula() {}
	Kopula(float a);
};

Kopula::Kopula(float a) {
	this->Promien = a;
}
float Kopula::Pole() {
	return 2 * 3.14 * pow(Promien, 2);
}

class Farba : public Kopula{
protected:
	string color;
	float zuzycie;
	float cenaNaLitr;
public:
	Farba(string kolor, float z, float c) {
		this->color = kolor;
		this->zuzycie = z;
		this->cenaNaLitr = c;
	}
	float Cena() {
		cout << color << "\n";
		return cenaNaLitr * (Pole() / zuzycie);
	}
};

int main() {	

	/*Prostopadloscian b1(2, 3, 4);
	cout << b1.Objetosc() << "\n";
	cout << b1.PolePowierzchni() << "\n";

	Szescian b2(3);
	cout << b2.Objetosc() << "\n";
	cout << b2.PolePowierzchni() << "\n";
	*/
	Kopula k1(1);
	cout << k1.Pole() << " ";
	Farba f1("Bialy", 1, 10);
	cout << f1.Cena();
}