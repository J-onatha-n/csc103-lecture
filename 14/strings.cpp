#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main()
{
	string s1 = "hello";
	string s2 = " class.";
	cout << s1+s2 << "\n";
	cout << s1.find("ll") << "\n";
	cout << s1.find("l l") << "\n";
	/* NOTE: the find function will give you the index of the first match,
	 * or a special value (-1 as a size_t) if it is not found.  There is a
	 * "nice" way to check: use string::npos. */
	string s3 = "ll";
	string s4 = "l l";
	if (s1.find(s3) != string::npos) {
		printf("found %s at index %lu in string %s\n", s3.c_str(),
				s1.find(s3),s1.c_str());
	}
	if (s1.find(s4) != string::npos) {
		printf("found %s at index %lu in string %s\n", s4.c_str(),
				s1.find(s4),s1.c_str());
	} else {
		printf("%s not found in %s\n",s4.c_str(),s1.c_str());
	}
	return 0;
}

// vim:foldlevel=2
