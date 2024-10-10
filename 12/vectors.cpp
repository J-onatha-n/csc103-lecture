#include <vector>
using std::vector;
#include <iostream>
using std::cin;
using std::cout;

/* NOTE: const+by-reference gives you the speed of by reference
 * since you don't have to make a copy of the input, but it also
 * gives you the feature that the caller knows the input won't be
 * modified by the function.  Think of it like "efficient by-value" */
void f(const vector<int>& V)
{
	/* NOTE: if we add the following line this program won't compile
	 * on account of the const modifier to parameter V. */
	// V[0] = 99;
}

int main()
{
	vector<int> V;
	int x;
	while (cin >> x) V.push_back(x);
	f(V);
	cout << V[0] << "\n";
	return 0;
}
