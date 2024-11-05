#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

/* A more compact version of the find function (not any faster, just less lines
 * of code).  NOTE: there are actually very clever ways to do string matching.
 * See the Knuth-Morris-Pratt algorithm for an example if you are curious. */

/* NOTE: I've left the bug in this version (the case where s2 is longer).
 * Try to understand how it might have happened that when searching for a
 * longer string in a shorter one, the program would sometimes claim to
 * have found it. */
size_t find(const string& s1, const string& s2)
{
	size_t n1 = s1.length(), n2 = s2.length();
	for (size_t i = 0; i < n1-n2; i++) {
		size_t j;
		for (j = 0; (j < n2) && (s1[i+j] == s2[j]); j++);
		if (j == n2) return i;
	}
	return string::npos;
}

int main()
{
	string s1 = "hello class!!";
	string s2;
	while (cin >> s2) {
		size_t i = find(s1,s2);
		if (i == string::npos)
			cout << "not found\n";
		else
			cout << "match found at index " << i << "\n";
	}
	return 0;
}

// vim:foldlevel=2
