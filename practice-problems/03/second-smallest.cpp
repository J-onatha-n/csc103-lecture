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
 int input = 0;
 int smallest = INT_MAX-1;
 int secondSmallest = INT_MAX;

 while(cin>>input){
  cout << "Input a number:  ";
  if(input < smallest && secondSmallest > smallest){
   secondSmallest = smallest;
   input = smallest;
   cout << "ss" << secondSmallest;
   cout << "smol" << smallest;

   } else if(input > smallest && input < secondSmallest){
    secondSmallest = input;
     cout << "ss" << secondSmallest;
     cout << "smol" << smallest;
    }

  }
 return 0;
}

// vim:foldlevel=2
