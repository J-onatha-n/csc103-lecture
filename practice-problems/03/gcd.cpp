/* TODO: write a program that reads two integers and prints their greatest
 * common divisor.  E.g., if the two integers were 12 and 18, then your
 * program should print 6.  If the numbers were 12 and 19, it should print 1.
 * NOTE: there is a nice way to do this, known as the Euclidean Algorithm,
 * but my intention is for you to just "brute force" search for the gcd.  */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
 int x,y,i,smaller;
 cin >> x;
 cin >> y;
 if(x<y){
  smaller = x;
  } else smaller = y;
 for(i = smaller; i>=1; i--) {
 // cout << x/y << "\n";
  if(x%i==0 && y%i==0){
  cout << i  << "\n";
  break;
  }
  }
	return 0;
}

// vim:foldlevel=2
