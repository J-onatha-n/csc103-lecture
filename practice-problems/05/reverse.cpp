/* TODO: write a function which takes a vector of integers V (by reference)
 * and reverses its contents.  That is, if V = 1 2 3, then after calling
 * reverse(V), it would contain 3 2 1.  NOTE: the goal is not to print
 * anything, but to rearrange the vector elements in memory. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
#include <algorithm>
using std::vector;
using namespace::std;

/* your answer goes here... */
void swap(vector<int> V);
int main()
{
	/* TODO: call your function, make sure it works... */
 vector<int> V = {1,2,3,4,5};
 swap(V);
	return 0;
}

void swap(vector<int> V){
 size_t S = V.size();
 for(size_t i = 0; i<S/2; i++){
  swap(V[i],V[S-i-1]);
 }
 for(size_t i = 0; i<S; i++){
  cout << V[i] << " \n";
 }
}
// vim:foldlevel=2
