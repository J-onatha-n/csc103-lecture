/* TODO: write a function which takes a *sorted* vector of integers V
 * and an integer x and performs a *binary search* for x.  The idea is
 * that since the vector is sorted, you can look at the middle element
 * and then rule out half of the vector from the search.  Just keep on
 * doing that until you find x or you run out of places to look. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */

int main()
{
 vector<int> V = {1,2,3,4,5,6,7,8,9,10};
	/* TODO: call your function, make sure it works... */
	return 0;
}

int search(int x, vector<int> V){
 size_t S = V.size();
 for(size_t i = 0; i<S; i++){
  if(V[S/2]>x) {
   i = S/2;}
  if(V[S/2]<x){

   }
 }
// vim:foldlevel=2
