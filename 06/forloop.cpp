#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* NOTE: you can change the #if 0 to #if 1 if you want to include
	 * those sections in the program. */
	/* testing out for loops */
	#if 0
	int i;
	// for (int i = 0; i < 10; i++) {
	for (i = 0; i < 10; i++) {
		cout << "hello\n";
	}
	cout << "value of i after loop == " << i << "\n";
	#endif

	/* exericse: draw a little rectangle of * characters.
	 * Read two integers n,m for the dimensions.  E.g., if
	 * n == 3 and m == 5, then you should print something
	 * like this:
	 *    * * * * *
	 *    * * * * *
	 *    * * * * *
	 * */
	int n,m;
	cin >> n >> m;
	/* IDEA: print one row at a time (to avoid moving cursor) */
	for (int i = 0; i < n; i++) {
		/* this will happen n times...  we want to print
		 * n rows... So maybe we should put soemthing here
		 * that prints ONE row (of m stars). */
		for (int j = 0; j < m; j++) {
			cout << "* ";
		}
		cout << "\n";
	}

	/* let's modify the above to print a hollow rectangle instead.
	 *
	 *    * * * * *
	 *    *       *
	 *    * * * * *
	 * */
	/* warm up: just go through some generic nested for loop and
	 * print out all the pairs of indices. */
	#if 0
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("(%i,%i) ",i,j);
			// cout << "(" << i << "," << j << ") ";
		}
		printf("\n");
	}
	#endif
	cout << "\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			/* IDEA: only print stars for extremal values of i,j */
			if (i == 0 || i == n-1 || j == 0 || j == m-1) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	/* NOTE about size_t: If you need to store the size of something
	 * (or a count), this is probably a good choice.  It is the largest
	 * unsigned integer type that your CPU natively can do arithmetic with. */
}

/* exercise: use a "brute force" search to find the greatest common divisor
 * (gcd) of two integers.  E.g., gcd(12,18) should give 6.  Or gcd(23,51) = 1 */

// vim:foldlevel=2
