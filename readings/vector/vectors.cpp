#include<iostream>
#include<vector>
using std::cin;
using std::cout;  
using namespace std;  
int main() { 
	int x;
	vector<int> V;
	while (cin >> x) {
		V.push_back(x); 
	}
	size_t n = V.size(); 
/*	V.push_back(32);
	V.push_back(100); //adds a new number the the "back" of the vector 
	V.push_back(20);
	V.pop_back(); 	*/  //removes the last element of the vector 
	for(size_t i=0; i<n; i++) {
		cout << V[n-i-1] << "\n";

	}
}
