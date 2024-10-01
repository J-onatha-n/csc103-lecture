#include<iostream>
using std::cin;
using std::cout;

int main () {
  int n = 1;
  int aCurrent = 1;
  int aAfter = 2;
  int aBefore = 1;
  int N;
  cin >> N;

  while (n < N) {
    n++;
    aBefore = aCurrent;
    aCurrent = aAfter;
    aAfter = aCurrent + aBefore;
    cout << n;
    }

    cout << aCurrent << "\n";

  }