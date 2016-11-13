// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h> 
using namespace std;

class triangle {
protected:
float a;
float b;
float c;
	float perimeter() {
		return(a + b + c);
	}
	float square() {
		float p;
		p = perimeter()/2;
		return(sqrt(p*(p - a)*(p - b)*(p - c)));
	}
public:
	triangle () {
		a = 0; b = 0; c = 0;
	}
	~triangle() { cout << "the programme is completed\n"; }

	void output() {
		cout << "a="<<a << "\n";
		cout << "b="<<b << "\n";
		cout << "c="<<c << "\n";
		cout << "p=" << perimeter() << "\n";
		cout << "s=" << square() << "\n";
	}
	void input() {
		cout << "start typing\nenter the length of the side a\n";
		cin >> a;
		cout << "enter the length of the side b\n";
		cin >> b;
		cout << "enter the length of the side c\n";
		cin >> c;
		cout << "enter completed! \n";
	}
};

int main()
{
	triangle a;
	a.input();
	a.output();
	system("pause");
    return 0;
}

