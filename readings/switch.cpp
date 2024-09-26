#include<iostream>
using namespace std;

//You can declare global variables up here that will be used throughout the whole program. 
//You can place them anywhere outside a function body but it's best places up here before main



int main () {
	double num1, num2;
	char op; //an operator
	cout << "Please enter an arithmetic expression: "; 
	cin >> num1 >> op >> num2;

	switch(op) { 
		case '+':
			cout << "The result is "  << num1+num2 << "\n";
			break;
		case '-':
			cout << "The result is " <<  num1+num2 << "\n";
			break;
		default: 
			cout << "Sorry, I dont understand the operator " << op << ".\n";
	}
	cout << "Bye!\n";
	
	//for loop section 
	int num;
	for(num=10; num>=1; num--){
	cout << "Your lucky number is: " << num << "\n";

	}

	//from lesson 9 
	//constants can be defined in the program so that they show up throughout the whole program not just one specific scope. 
	//i.e :: const double x = 5; 
	//this would mean if x is used anywhere it means the same thing 
	//the standard for constants is to use all caps for example:: 
	//const CONSTANT_VALUE = 10;
	//NOTE: Once a constant is assigned you can no longer reassign it. The value above will be 10 everywhere no matter what!!!!!!!!
	
	//you can declare variables in a for loop 
	for(int n =0; n <= 10; n++) sum = sum+n;
	//here n is local to the for loop 
	//NOTE: For loop has this basic formula :: 
	//for (initilization; condition; update) {} 

	return 0; 
}
