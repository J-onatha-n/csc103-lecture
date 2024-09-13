/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */
	int input;
	int sum = 0;

	while(cin >> input) {
		sum += input;
		}

		cout << "Total sum " << sum << "\n";

	return 0;
}

// vim:foldlevel=2
