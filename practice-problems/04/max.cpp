/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;

/* your answer goes here... */
int largest(int x,int y,int z);
int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	int result =largest(x,y,z);
	cout << result << "\n";
	// TODO: call your function, make sure it works...
	return 0;
}

int largest(int x,int y,int z){
	if(x>y && x>z) return x;
	if(y<x && y>z) return y;
	if(z>x && z>y) return z;
	if(x==y || x==z || y==z || x==y==z) return -1;
	return 0;
	}
// vim:foldlevel=2
