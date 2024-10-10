#include<iostream>
using std::cin;
using std::cout;
//by putting numbers here we have made a default arugment
//default arugments must be to the right side of a function
void showVolume(int length, int width = 1, int height = 1);

//double f(double x);
int main() {
	showVolume(4);

	/*
	int n;
	cin >> n;
	cout << f(n) << "\n";
	//cou
	cout << f(f(n)) << "\n";

	//constants
	const double TAX_RATE = 0.25;
	double income;
	cin >> income;
	cout << income*TAX_RATE << "\n";
}

double f(double& x) { //adding a & sign makes it so that the address of the
											//variable being used as input is passed throguh to to the
											//function while calling it.
	return x*x+1;
*/
}
void showVolume(int length, int width, int height){
	cout << length << " " << width << " " << height << "\n";
	}


