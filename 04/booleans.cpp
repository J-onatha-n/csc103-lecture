#include <iostream>
using namespace std;

int main() /* remember: this is the starting point of our program */
{
	int x,y;
	cin >> x >> y;
	if (x = y) {
		cout << "they were equal\n";
	} else {
		cout << "they were NOT equal\n";
	}
	/* NOTE: integers can be interpreted as booleans!  The convention
	 * is as follows: 0 == false and anything else == true.
	 * Further, note that assignment statements have a *value*.
	 * You will get the value of whatever was on the right side. */
}

// vim:foldlevel=3
