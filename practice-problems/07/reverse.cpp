/* TODO: write a function to reverse a linked list.
 * IMPORTANT: your function should NOT allocate any memory.  I want
 * you to do this just by rearranging all the pointers. */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

void reverse(node*& L)
{
	/* TODO: write me */
}

int main()
{
	/* NOTE: some test code for you is given below.  The readlist function
	 * is defined in list-utils.h and just consumes all of stdin into a list. */
	node* L = readlist();
	printlist(L);
	reverse(L);
	printlist(L);
	return 0;
}

// vim:foldlevel=2
