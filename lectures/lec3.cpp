#include<iostream> 
using std::cin;
using std::cout; 

int main() {

	int currentSum = 0;
	int input; 
	while(cin >> input){ 
		currentSum += input; //adds both and makes currentSum the total 

#if 0 
this is used to make comments, and doesnt break with nested comments

#endif  
	}

	cout << "The sum was " << currentSum << "\n" ;



}
