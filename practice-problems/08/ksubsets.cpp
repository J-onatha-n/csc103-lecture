/* TODO: write a function that takes a vector V of (distinct) integers, and an
 * integer k and returns a vector of vectors representing all possible subsets
 * of k elements from V.  E.g., if V = {1,2,3}, and k was 2, answer should be
 * {{1,2},{1,3},{2,3}}.  If k == 1, the answer would be {{1},{2},{3}}.
 * NOTE: try to do this without just computing the full powerset and throwing
 * away the ones with size != k.  */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

/* NOTE: V is given by value in case you want to modify it (to make a
 * smaller input for recursive calls). */
vector<vector<int>> ksubsets(vector<int> V, int k)
{
	return {}; /* just so it compiles. */
}


int main(int argc, char *argv[])
{
	/* NOTE: we'll get the value of k from the command line: */
	int k=0;
	if (argc < 2) fprintf(stderr, "warning: using default value k==0\n");
	else k = atoi(argv[1]);
	vector<int> S;
	int x;
	while (cin >> x) S.push_back(x);
	vector<vector<int>> P = ksubsets(S,k);
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
