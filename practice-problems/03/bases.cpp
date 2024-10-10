/* TODO: write a program that reads an integer b (say b < 10), and
 * another integer n, and then prints a string that represents the
 * integer n in base b.  E.g., if b=7 and n=94, your program would
 * output digits "163", as 94 = 1*49 + 6*7 + 3.  ("361" is also ok if
 * you print the least significant digit first).  Or if b=2 and n=7,
 * then you would print "111" since 7 = 1*4 + 1*2 + 1. */

#include <iostream>
using std::cin;
using std::cout;
//gives an alias to int, so Z just means int in this case
typedef int Z;
int main()
{
	Z n,b;
	cin >> b;
	while(b >= 10) {
		cout << "b must be smaller than 10\n";
		cin >> b;
		}
	cin >> n;
	while(n>0){
		int remainder = n%b;
		n = n/b;
		cout << remainder;
	}
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
