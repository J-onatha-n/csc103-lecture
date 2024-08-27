#include <iostream>
using std::cout;
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

int main()
{
	/* TODO: read integers from stdin and insert each one to the front
	 * of a linked list. */
	node* L = NULL;
	/* TODO: print the list back out so you know it worked. */
	return 0;
}

// vim:foldlevel=2
