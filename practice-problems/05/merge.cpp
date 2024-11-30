/* TODO: write a function which takes two vectors of integers V1 and V2,
 * *which you assume will be SORTED*.  (That is, i<=j ==> V1[i]<=V1[j], and
 * similarly for V2).  The function should merge these two vectors into a
 * third vector which is also sorted.
 * NOTE: do NOT do this by just adding all elements into the 3rd vector and
 * then sorting that.  You can do this much more efficiently since the input
 * vectors are sorted already.  Your function should take a number of steps
 * proportional to the sum of the sizes of V1 and V2.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
void merge(vector<int> V1, vector<int> V2);
int main()
{
 vector<int> V1 = {10,100,300,3000};
 vector<int> V2 = {22,22,44,64};
 merge(V1,V2);
	/* TODO: call your function, make sure it works... */
	return 0;
}

void merge(vector<int> V1, vector<int> V2){
 vector<int> N;
 size_t total = V1.size() + V2.size();
 cout << total << "\n";
 int i = 0, j = 0;
 for(int k = 0; k < total; k++) {
  if(V1[i]<=V2[j] && i < V1.size()){
   N.push_back(V1[i]);
   i++;
   continue;
   }
   if(V2[j]<=V1[i] || j < V2.size()){
    N.push_back(V2[j]);
    j++;
    continue;
   }
  }
  for(int k = 0; k < N.size(); k++){
   cout << N[k] << " ";
   }
   cout << "\n";
 }

// vim:foldlevel=2
