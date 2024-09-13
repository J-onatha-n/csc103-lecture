/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */
	int a, b, c;	
	cout << "Enter first number: \n";
	cin >> a;	
	cout << "Enter number: \n";
	cin >> b;	
	cout << "Enter third number: \n";
	cin >> c;
	cout << "The average is: " << (a+b+c)/3 << "\n";
	
	return 0;	
}

// vim:foldlevel=2
