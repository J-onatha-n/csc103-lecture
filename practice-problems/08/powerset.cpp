/* TODO: write a recursive function to compute the powerset of a given set.
 * We will (ab)use vectors to represent our sets.  Recall that the powerset
 * of a set S is the set of all subsets.  E.g., if input was S = {1,2,3},
 * then the ouput would be P = {{},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}}.
 * NOTE: return type should be vector<vector<int>>.  See below.
 * */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

/* NOTE: V is given by value in case you want to modify it (to make a
 * smaller input for recursive calls). */
vector<vector<int>> powerset(vector<int> V)
{
	return {}; /* just so it compiles. */
}


int main()
{
	/* test code for power set function: */
	vector<int> S;
	int x;
	while (cin >> x) S.push_back(x);
	vector<vector<int>> P = powerset(S);
	cout << "{\n";
	for (size_t i = 0; i < P.size(); i++) {
		/* print the set P[i]... */
		cout << "  { ";
		for (size_t j = 0; j < P[i].size(); j++) {
			cout << P[i][j] << " ";
		}
		cout << "}\n";
	}
	cout << "}\n";
	return 0;
}

// vim:foldlevel=2
