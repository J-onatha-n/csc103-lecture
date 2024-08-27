#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* TODO: As you may have seen in class, we can make functions which take *other
 * functions* as parameters.  Try to use this exciting new technology to write
 * a function called map which takes a vector of integers and a transformation
 * t which modifies a single integer, and then applies that transformation to
 * every element of the vector.  The following typedef is suitable for the
 * function type for t: */
typedef void (*transformation)(int&);
/* In case it helps, here is an example of a function of the above type: */
void addone(int& x) { x++; }

/* your answer goes here... */

/* TODO: once you have the map function written, use it to
 * 1. increment every element of a vector (you can use addone above)
 * 2. multiply every element of a vector by 2
 * 3. replace each element with a 1 if it is even, and 0 if it is odd
 * */

int main()
{
	return 0;
}

// vim:foldlevel=2
