#include<iostream>
using namespace std;
class Complex {
private:
	double image;
	double real;
public:
	Complex(double r = 0.0, double i = 0.0) :real(r), image(i) {}
	Complex operator+(int n) {
		return Complex(real + n, image);
	}
	friend Complex operator+(int r,const Complex& C) {
		return Complex(C.real + r,C.image);
	}
	void display() const{
		cout << real << "+" << image <<"i"<< endl;
	}
};
int main() {
	Complex c1(9.8,1.9);
	Complex c;
	c = c1 + 9;
	c.display();
	return 0;
}
