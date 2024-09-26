#include <iostream>
using std::cin;
using std::cout;

/* exercise: write a function that swaps the values of its
 * parameters.  E.g., if x=1,y=2, after calling swap(x,y),
 * y will contain 1 and x contain 2. */
void swap(int& x, int& y); /* if we want to call the function before
                              we've defined it, we can use a prototype
							  like the above. */

int main()
{
	int a,b;
	cin >> a >> b;
	printf("a == %i, b == %i\n",a,b);
	swap(a,b);
	printf("a == %i, b == %i\n",a,b);
}

void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

// vim:foldlevel=2
