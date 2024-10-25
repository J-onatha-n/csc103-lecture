/* TODO: write a function called "pop_front" which will remove the first
 * element of a vector.  NOTE: unlike pop_back, which is a *member function*
 * of the vector, your function will take a vector parameter.  So instead of
 * calling V.pop_front(), you would do pop_front(V).  Use the function header
 * given below. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here: */
void pop_front(vector<int>& V)
{
 for(size_t i = 0; i<V.size(); i++){
  V[i] = V[i+1];
  }
  V.pop_back();
 for(size_t i = 0; i<V.size(); i++){
  cout<<V[i]<<" \n";
  }
}

int main()
{
	/* TODO: call your function, make sure it works... */
 vector<int> V = {1,2,3,4};
 pop_front(V);
	return 0;
}

// vim:foldlevel=2
