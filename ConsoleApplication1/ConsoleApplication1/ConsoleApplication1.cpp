#include <iostream>

using namespace std;


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
	Prostopadloscian() {}
};

class Szescain : public Prostopadloscian {
private:
	float a;
public:
	float PolePowierzchni() {
		return 6 * (Pole(a, a));
	}
	float Objetosc() {
		return pow(a, 3);
	}
	Szescain(float a) {
		this->a = a;
	}
};

int main() {

	Prostopadloscian b1(2, 3, 4);
	cout << b1.Objetosc() << "\n";
	cout << b1.PolePowierzchni() << "\n";

	Szescain b2(3);
	cout << b2.Objetosc() << "\n";
	cout << b2.PolePowierzchni() << "\n";


}