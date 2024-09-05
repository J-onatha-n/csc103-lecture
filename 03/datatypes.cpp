#include <iostream>
using namespace std;

int main() /* remember: this is the starting point of our program */
{
	/* warning about floating point numbers: due to rounding error,
	 * they can behave in strange ways: */
	// double f = 1/10; /* this would set f = 0.0! */
	double f = 0.1;
	double g = f+f+f; /* set g to 3f */
	if (g == 0.3) {
		cout << "f+f+f = 0.3 as expected\n";
	} else {
		cout << "hmmmmmmm...\n";
		#if 0
		cout << "0.3 == " << 0.3 << "\n";
		cout << "g   == " << g << "\n";
		#endif
		printf("0.3 = %.17f\n",0.3);
		printf("g   = %.17f\n",g);
	}

	/* experiments with characters... */
	char c = 'A';
	// char c = 77;  /* evidently, ASCII for 'M' is 77! */
	cout << c << "\n";
	cout << (int)c << "\n"; /* print c *as if it were an integer*. */

	/* NOTE: when you combine integers using arithmetic operators,
	 * you are guaranteed to get an integer result. */
	cout << "10/3 == " << 10 / 3 << "\n";

	/* what happens when you mix floating point and integers? */
	cout << "10/3.0 == " << 10 / 3.0 << "\n";
	/* NOTE: can think of floating point as some sort of
	 * contaminant... */
}

// vim:foldlevel=3
