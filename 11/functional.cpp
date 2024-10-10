#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <limits.h>

/* we are going to make a new datatype that corresponds to a *function* */
/* NOTE: you can give datatypes convenient aliases like this: */
// typedef int Z;
// typedef vector<vector<int>> matrix;
/* we can also use typedef to make *function* types: */
typedef int (*binaryop)(int,int);
/* the above says that anything of datatype "binaryop" is actually
 * a function that takes two integers and produces another int as a result. */
/* Given the above, this might be a plausible prototype for a function
 * that does the folding operation: */

int fold(vector<int> V, int e, binaryop b)
{
	int s = e;
	for (size_t i = 0; i < V.size(); i++) {
		// s += V[i];
		s = b(s,V[i]);
	}
	return s;
}
/* now all we need is binary operations to apply this to... */
int add(int a, int b) { return a+b; }
int mul(int a, int b) { return a*b; }
int min(int a, int b) { return a<b?a:b; }
int max(int a, int b) { return a>b?a:b; }
/* NOTE: the "ternary" operator has the following form:
 * <boolean expr>?<value if true>:<value if false>.  You can use it
 * sometimes as a compact if/else. */

int main()
{
	int x;
	vector<int> V;
	while (cin >> x) V.push_back(x);
	cout << "sum:  " << fold(V,0,add) << "\n";
	cout << "prod: " << fold(V,1,mul) << "\n";
	cout << "min:  " << fold(V,INT_MAX,min) << "\n";
	cout << "max:  " << fold(V,INT_MIN,max) << "\n";
}

// vim:foldlevel=2
