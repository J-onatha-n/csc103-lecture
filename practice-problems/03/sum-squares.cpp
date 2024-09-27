/* TODO: write a program that will read an integer n from standard input and
 * then print the sum of the first n squares.  That is:
 * 1^2 + 2^2 + 3^2 + ... + n^2.
 * NOTE: The '^' operator in C++ is NOT exponentiation!  To square x, just
 * use x*x instead.
 * Bonus question: compute the sum of the first n *odd* squares.  That is,
 * 1^2 + 3^2 + 5^2 + ... + (2n-1)^2
 * */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
 //odd numbers only
 int input;
 cin >> input;
 int sum = 0;
 for(int i = input; i>= 1; i--){
  if(i%2 != 0){
   sum += i * i;
   if(i < 0) {
   break;
   }

   }
  }
  cout << sum << "\n";

 /*
 int input;
 cin >> input;
 int sum = 0;
 for(int i = input; i>=1; i--){
  sum += i * i;
  if(i < 0) {
   break;
   }
  }
  cout << sum << "\n"; */


	return 0;
}

// vim:foldlevel=2
