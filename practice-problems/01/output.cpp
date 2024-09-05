#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
	int n;
	cout << (n = 4) << endl;    //here we state n = 4
	cout << (n == 4) << endl;   //checking if n = 4, it is so 1
	cout << (n > 3) << endl;    //true
	cout << (n < 4) << endl;    //false
	cout << (n = 0) << endl;    //here we state n = 0
	cout << (n == 0) << endl;   //true
	cout << (n > 0) << endl;	  //false
	cout << (n && 4) << endl;   //not sure what this means n and 4?
	cout << (n || 4) << endl;   //n or 4?
	cout << (!n) << endl;       //not n ?
    return 0;
}


// vim:foldlevel=2
