#include<iostream> 
#include<limits.h>
using namespace::std; 


int main() {
	int input;
	int min = INT_MAX;
	int max = INT_MIN;
	double  avg; 
	int tot; 
	while (cin >> input) {
		if(input<min) min = input; 
		if(input>max) max = input; 
		avg += input; 
		tot++;
	}
	cout << "max: " << max << "\n";
	cout << "min: " << min << "\n";
	cout << "avg: " <<  avg/tot << "\n";
	return 0; 
}
