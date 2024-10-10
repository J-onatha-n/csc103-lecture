// #define _GLIBCXX_DEBUG
#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

int main()
{
	/* let's see what happens writing out of bounds in a vector
	 * and see what we can do to mitigate. */
#ifdef _GLIBCXX_DEBUG
	cout << "glibc vector debug stuff is enabled!\n";
#endif
	vector<int> V;
	V.push_back(234);
	V.push_back(988);
	for (size_t i = 0; i < 10; i++) {
		printf("V[%lu] = %i\n",i,V[i]);
	}
	cout << V[1919] << "\n";
}

// vim:foldlevel=2
