#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* exercise: read integers from standard input and print them
 * back out in reverse order */
int main()
{
	int x; /* holds an input */
	vector<int> V; /* the <int> says each variable in the
					  container will be an int */
	while (cin >> x) { /* read into x over and over... */
		/* add x to the vector: */
		V.push_back(x);
		/* NOTE: the above will allocate memory if necessary */
	}
	/* you can access the "inner" variables using the bracket notation:
	 * V[i] is the ith element of the vector.  NOTE: indexing starts
	 * from 0... */
	#if 0
	cout << V[0] << "\n";
	cout << V[1] << "\n";
	cout << V[2] << "\n";
	#endif
	/* NOTE: the vector will keep track of how many elements it has.
	 * You can get this from V.size() */
	for (size_t i = V.size()-1; i < V.size(); i--) {
		cout << V[i] << "\n";
	}
}

// vim:foldlevel=2
