#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: investigate the following questions (by writing a bit
	 * of code here and then compiling and running it):
	 * 1. What happens if you assign a floating point value to an
	 *    integer variable?
	 * 2. What about assigning an integer to floating point?  Can
	 *    you think of any way it could go wrong?  (Here, "wrong"
	 *    means "surprising" or unintuitive.)  Hint: read the
	 *    IEEE format and you'll see that you might have issues
	 *    with large integers.
	 * 3. What type of result do you get when adding or multiplying
	 *    floating point values with integers? */
	
	int integer = 3.4;
	cout << integer << "\n"; //gets rid of the decimal and just outputs 3
	float floatval = 2; 
	cout << floatval << "\n"; //outputs 2 
	cout << integer * floatval << "\n"; //ignored the decimals and produced an integer answer		   

	return 0;
}

// vim:foldlevel=2
