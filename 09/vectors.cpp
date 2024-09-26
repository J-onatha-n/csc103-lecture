#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* exercise: write a function taking a vector of integers and returning
 * another containing only the even elements.
 * NOTE: I wrote this up after class -- it was only in the handwritten
 * notes during the lecture. */
vector<int> evens(vector<int> V)
{
	vector<int> E; /* will store the evens; starts out empty */
	for (size_t i = 0; i < V.size(); i++) {
		if (V[i] % 2 == 0)
			E.push_back(V[i]);
	}
	return E;
}

int main()
{
	/* test out what we did above: */
	int x;
	vector<int> V;
	while (cin >> x)
		V.push_back(x);
	vector<int> E = evens(V);
	for (size_t i = 0; i < E.size(); i++) {
		cout << E[i] << " ";
	}
	cout << "\n";
}

// vim:foldlevel=2
