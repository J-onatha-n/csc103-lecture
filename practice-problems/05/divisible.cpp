/* TODO: write a function which takes a vector of integers V and an
 * integer d and returns another vector containing only the elements
 * of V which are divisible by d.  ("x is divisible by d" means that
 * there exists another integer q such that x == dq.  That is, when
 * you divide x by d, there's no remainder.) */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
void divis(int d, vector<int> V);

int main()
{
	/* TODO: call your function, make sure it works... */
  int d;
  cin >> d;
  vector<int> V = {1,2,3,4,5,6};
  divis(d,V);
	return 0;
}
void divis(int d, vector<int> V){
  size_t s = V.size();
  vector<int> q;
  for(size_t i = 0; i < s; i++){
    if(V[i]%d==0){
      q.push_back(V[i]);
      }
    }
  for(size_t i = 0; i<q.size(); i++){
    cout << q[i] << " \n";
    }
  return;
 }

// vim:foldlevel=2
