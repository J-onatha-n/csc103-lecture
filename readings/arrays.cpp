#include<iostream>
using namespace std;

int main() {
  const int SCORE_SIZE = 5; //can use constants to declare array size for simplicity
  int arrayTest[4] = {2, 4, 5, 1};
  //for fun try to find the smallest # in an array
  double score[5] /*this is an array*/, sum = 0;
  cout << "Please input 5 #'s. Seperate the #'s by spaces: ";
  int i;
  for(i = 0; i<5; i++) {
    cin >> score[i];
    sum+=score[i];

    cout.setf(ios::fixed);
    cout.precision(2);
    }
    cout << "The average is " << sum/5 << "\n";

  }