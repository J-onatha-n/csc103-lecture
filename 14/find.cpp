#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

size_t find(const string& s1, const string& s2)
{
	/* IDEA: check for match at all possible starting points... */
	size_t n1 = s1.length(), n2 = s2.length();
	if (n1 < n2) return false; /* second string was longer */
	for (size_t i = 0; i < n1-n2; i++) { /* i goes through all possible starting points */
		/* now check for a match starting at i */
		bool match = true;
		size_t j;
		for (j = 0; (j < n2) && (s1[i+j] == s2[j]); j++) {
			if (s1[i+j] != s2[j]) { /* no match */
				match = false;
				break;
			}
		}
		if (match) return i;
		// else, back to the top to try the next possible starting point
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
