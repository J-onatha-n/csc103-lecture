#include<iostream> 
#include<limits.h>
using namespace::std; 


int main() {
	int min = INT_MAX;
	int max = INT_MIN;
	int avg = 0;
	int input; 
	int count = 0;
	while(cin>>input){
		avg += input; 
		if(input < min) min = input; 
		if(input > max) max = input; 
		count++;
		cout << "Max = " << max << "\n"; 
		cout << "Min = " << min << "\n";
	}
	avg = avg/count;
	cout << "Average = "  <<avg << "\n" ; 
}
