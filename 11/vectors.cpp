#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void push_front(vector<int>& V, int x)
{
	/* step 1: make V bigger */
	// V.push_back(0);
	/* or */
	V.resize(V.size()+1);
	/* step 2: move everything to the right one space */
	for (size_t i = V.size()-1; i > 0; i--) {
		V[i] = V[i-1];
	}
	/* step 3: add x */
	V[0] = x;
}

int main()
{
	int x;
	vector<int> V;
	while (cin >> x)
		push_front(V,x);
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
}

// vim:foldlevel=2
