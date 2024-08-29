#include <iostream>   /* copy+paste definitions of cin and cout from file "iostream" */
using namespace std;  /* put us on a first-name basis with cin and cout... */

int main() /* this (main()) is the official starting point of the program */
{
	/* we need places to write numbers... we'll use VARIABLES */
	int x;  /* we'll use this one for the new numbers */
	int y;  /* we'll use this to store the largest number seen so far. */

	/* how to listen for a new number?  We'll use "cin" from the STL */
	while (true) {
		cin >> x; /* this would "listen" for a new number, overwriting x once received */
		if (!cin.good()) break; /* this lets us stop the loop if we failed to read a new number */
		if (x > y) {
			/* overwrite y with x: */
			y = x; /* think of it like y <-- x */
		}
	}
	cout << "largest number was: " << y << "\n";
	return 0;
}

/* NOTE: I added some stuff after class since we ran out of time.  I'll explain
 * all that in detail next time.  Note that there are a few issues with this
 * program as it is.  Can you see anything wrong with it? */
/* NOTE: if you want to run this program, run "g++ largest.cpp" from this
 * directory.  This will produce a file "a.out", which you can run from your
 * terminal by typing "./a.out" and hitting enter.  Then type some numbers,
 * then hit ctrl-d to end your list and see what happens. */

// vim:foldlevel=3
