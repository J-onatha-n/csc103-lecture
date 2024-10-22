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
	return 0;
}
