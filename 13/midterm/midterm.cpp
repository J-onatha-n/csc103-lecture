#include <iostream>
using std::cin;
using std::cout;

/* question 1 */
int main()
{
	int x;
	int smeven = INT_MAX;
	int lgodd  = INT_MIN;
	while (cin >> x) {
		if (x % 2 && x > lgodd)
			lgodd = x;
		else if (x % 2 == 0 && smeven > x)
			smeven = x;
	}
	cout << "smallest even: " << smeven << "\n";
	printf("smallest even: %i\n",smeven);
	printf("largest odd:   %i\n",lgodd);
	return 0;
}
/* question 2: (erase value from vector at a given index) */
void erase(vector<int>& V, size_t i)
{
	/* IDEA: start at index i, overwrite with i+1 all the way
	 * to the end of the vector and then pop_back */
	if (i >= V.size()) return;
	for (size_t j = i; j < V.size()-1; j++)
		V[j] = V[j+1];
	V.pop_back();
}

/* main to test erase: */
int main()
{
	int x;
	vector<int> V;
	while (cin >> x) V.push_back(x);
	erase(V,3);
	for (size_t i = 0; i < V.size; i++)
		cout << V[i] << " ";
	cout << "\n"
	return 0;
}

/* question 3: frequency table of integers in a given range */
int main()
{
	int x;
	vector<size_t> F;
	F.resize(n,0); /* Now F[0,...,n-1] exist, and are set to 0 */
	/* F[x] === #times we've seen x */
	while (cin >> x)
		F[x]++;
	/* NOTE: we are assuming that all the inputs are in the range 0..n-1.
	 * If not, this could crash... */
	for (size_t i = 0; i < n; i++)
		printf("%lu: %lu\n",i,F[i]);
	/* NOTE: could of course use cout for this as well... */
	return 0;
}
