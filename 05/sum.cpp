#include <iostream>
using std::cin;
using std::cout;

/* exercise: write a program that reads integers from stdin
 * and computes the sum of them all. */

int main()
{
	int x;
	int s = 0; /* NOTE: can combine initial assignment with declaration */
	while (cin >> x) {
		// s = s+x;
		s += x; /* same as above: add x and s, store result in s */
	}
	cout << "sum was " << s << "\n";
}

// vim:foldlevel=2
