/* TODO: write a function that clears a list, freeing all the memory it used.
 * Prototype is given below.  */
#include <iostream>
using std::cout;
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

void clear(node*& L)
{
	/* TODO: write me */
}

int main()
{
	/* NOTE: some test code for you is given below.  It just reads a list
	 * from stdin, prints it, tries to clear it, and prints again. */
	node* L = NULL;
	int x;
	while (cin >> x) L = new node(x,L);
	node* p = L;
	while (p) cout << p->data << " ", p = p->next;
	cout << "\n";
	clear(L);
	p = L;
	while (p) cout << p->data << " ", p = p->next;
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
