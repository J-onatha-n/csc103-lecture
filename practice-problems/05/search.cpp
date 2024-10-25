/* TODO: write a function which takes a vector of integers V and an integer x
 * and returns a boolean indicating whether or not x was found in the elements
 * of V. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
bool search(int x,vector<int> V);

int main()
{
	/* TODO: call your function, make sure it works... */
	int x;
	cin >> x;
	vector<int> V = {2,4,6,8,103};
	int look = search(x,V);
	cout << look << "\n";
	return 0;
}

bool search(int x,vector<int> V) {
	size_t size = V.size();
	bool isMath = false;
	for(size_t i = 0; i<size; i++){
		if(x == V[i]){
			isMath = true;
			}
		}
		return isMath;
	}
// vim:foldlevel=2
