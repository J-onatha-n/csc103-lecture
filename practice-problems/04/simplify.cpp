#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: Simplify this program as much as possible.  (NOTE: If the
	 * simplification does not feel a bit dramatic, maybe ask me if
	 * you've got the right answer.) */
	int x;
	while (cin >> x) {
		if ((x != 3 || x != 7) && (x != 0 || x != 1)) {
			cout << x << "\n";
		} else if (x+1 > 13) {
			cout << x+1 << "\n";
		}
	}
	return 0;
}

// vim:foldlevel=2
