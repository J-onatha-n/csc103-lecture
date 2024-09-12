#include <iostream>
using namespace std;

int main() /* remember: this is the starting point of our program */
{
	/* NOTE: you can treat integers as boolean expressions: */
	if (7) {
		cout << "I guess 7 is true\n";
	} else {
		cout << "I guess 7 is false\n";
	}
	if (0) {
		cout << "I guess 0 is true\n";
	} else {
		cout << "I guess 0 is false\n";
	}
	/* The convention is that any non-zero integer counts as "true" and
	 * zero counts as false. */

	int x,y;
	// cin >> x >> y;
	cin >> x;
	cin >> y;
	if (x = y) {
		cout << "they were equal\n";
	} else {
		cout << "they were NOT equal\n";
	}
	cout << "x == " << x << "\n";
	cout << "y == " << y << "\n";
	/* NOTE: assignment statements have a *value*.  You will get the value of
	 * whatever was on the right side.  If you want to understand *why* this
	 * might make sense, note that you can do the following to make multiple
	 * assignments in the same statement:
	 *     a = b = c;
	 * This will be parsed as:
	 *     a = (b = c);
	 * And now maybe you can see why (b = c) will take the value of c...
	 * */
}

// vim:foldlevel=3
