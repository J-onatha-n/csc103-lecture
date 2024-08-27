/* TODO: write a function that takes an integer x and a list, and searches for
 * x in the list, returning a boolean indicating whether or not x was found. */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

bool search(node* L, int x)
{
	/* TODO: write me */
	return false; /* just so it compiles... */
}

int main()
{
	/* NOTE: some test code for you is given below.  It makes a fixed
	 * list of integers and then runs searches against that from values
	 * given on stdin. */
	node* L = buildlist({1,3,5,7,9,11,13});
	printlist(L);
	int x;
	while (cin >> x)
		printf("%i was %sfound\n",x,search(L,x)?"":"not ");
	return 0;
}

// vim:foldlevel=2
