/* TODO: make sure you can compile this and run it.  NOTE: there is
 * a Makefile for convenience, but don't use it for this exercise.
 * Instead, try to follow the steps in this tutorial:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/commandline.html */
#include <iostream>
using std::cout;
#include <string.h>

int main()
{
	const char* s = "pbatenghyngvbaf ba pbzcyrgvat gur svefg rkrepvfr!";
	size_t n = strlen(s);
	for (size_t i = 0; i < 49; i++)
		cout << (char)(('a' <= s[i] && s[i] <= 'z')?((s[i] - 'a' + 13) % 26 + 'a'):s[i]);
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
