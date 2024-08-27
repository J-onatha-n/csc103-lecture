/* TODO: write a function to copy a linked list.  The function should
 * return a pointer to the copy.  To be clear, you need to allocate new
 * memory for each node -- the pointer you return should not share any
 * nodes with the input parameter.  */
#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

node* copy(node* L)
{
	/* TODO: write me */
	return NULL; /* just so it compiles... */
}

int main()
{
	/* NOTE: some test code for you is given below. */
	node* L = readlist();
	printlist(L);
	node* C = copy(L);
	printlist(C);
	return 0;
}

// vim:foldlevel=2
