/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two
 * different sums?
 * Bonus question (might be non-obvious): can you do this without any
 * if statements? */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int input = 0 ;
	int diff = 0;


	/* your answer goes here... */

	while(cin >> input) {
	/*
		if(input%2==0) diff += input;
		else if(input%2 >= 1) diff -= input;
	*/
		while(input%2==0) {
			diff += input;
			break;
			}
		while(input%2>=1) {
			diff -= input;
			break;
			}

	}
	cout << "Difference of evens and odds : " << diff << "\n";

	return 0;
}

// vim:foldlevel=2
