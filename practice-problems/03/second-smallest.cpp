/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
#include <climits>
using std::cin;
using std::cout;

int main()
{
	/* your answer goes here... */
 int input;
 int smallest = INT_MAX;
 int secondSmallest = INT_MAX;

 while(cin >> input){
  if(input < smallest){
   secondSmallest = smallest;
   smallest = input;
   }
   if(input > smallest && input < secondSmallest){
    secondSmallest = input;
    }
  cout << "ss: " << secondSmallest << "\n";
   cout << "smol: " << smallest << "\n";
  }
 return 0;
}

// vim:foldlevel=2
