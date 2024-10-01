#include<iostream>
using std::cin;
using std::cout;

double f(double x) {
	return x*x+1;
}

int main() { 
	cout << f(3) << "\n";
	cout << f(f(3)) << "\n";

}

