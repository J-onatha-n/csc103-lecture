#include <iostream>  /* copy+paste definitions of cin and cout. */
using namespace std; /* let us call cin and cout by their first names... */
#include <climits>   /* copy definition of INT_MIN */
/* NOTE: every C++ program needs a designated "starting point".
 * ("what should I do first?").  The main funciton is this starting point. */
int main()
{
	/* we need places to write numbers... we'll use VARIABLES */
	int x;  /* we'll use this one for the new numbers */
	int y;  /* we'll use this to store the largest number seen so far. */
	y = INT_MIN;  /* kind of like -infinity for integers. */
	
	/* how to listen for a new number?  We'll use "cin" from the STL */
	while (true) {
		cin >> x; /* this would "listen" for a new number, overwriting x once received */
		/* XXX need to figure out when to stop this loop.  In particular, how do we
		 * know when there are no more numbers? */
		if (!cin.good()) break; /* if no more numbers, end the loop. */
		if (x > y) {
			/* overwrite y with x: */
			y = x; /* think of it like y <-- x */
		}
	}
	cout << "largest number was: " << y << "\n";
}

// vim:foldlevel=3
