/* In this directory, you will find 3 cpp files.  TODO: I want you to manually
 * compile them all (using g++ -c) and link the resulting objects together.
 * I have intentionally introduced a few linker errors that will require
 * some editing of THIS file in order to resolve.  (Leave the other cpp files
 * untouched).  It might be helpful to re-read this tutorial:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/commandline.html
 * Also a reminder: you can examine the symbols in your object files and
 * executables using the command `nm -C <file-you-want-to-examine>`.
 * */

#include <iostream>
using std::cin;
using std::cout;

int max(int a, int b, int c);
void swap(int a, int b);

int Main()
{
	int x,y,z;
	cin >> x >> y >> z;
	int w = max(x,y,z);
	swap(x,w);
	cout << "x == " << x << "\n";
	cout << "y == " << y << "\n";
	cout << "z == " << z << "\n";
	cout << "w == " << w << "\n";
	return 0;
}

// vim:foldlevel=2
