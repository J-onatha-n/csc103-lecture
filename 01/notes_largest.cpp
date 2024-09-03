#include<iostream>
using std::cin;
using std::cout;
#include <limits.h> //needed for INT_MIN
int main() {
    //test for smallest
  int smallest = INT_MAX;
  int input;
  int secondSmallest = INT_MAX;


  while(cin >> input){
    if (input < smallest && smallest <= secondSmallest) {
      cout << "new smallest\n";
      secondSmallest = smallest;
      smallest = input;


      }

    if (secondSmallest <= input && smallest < secondSmallest) {
      cout << "new second smallest\n";
      secondSmallest = input;
      }



   /* if(input < smallest < secondSmallest) {
      smallest = input;
      } else if (smallest < input < secondSmallest) {
      secondSmallest = input;
      }
*/
      cout << "Second smallest number was " << secondSmallest <<"\n";
      cout << "Smallest number was " << smallest <<"\n";
    }



  //cout << "Input numbers to determine the largest! ";


  /*
  int largest = INT_MIN;
  int input;
  cin >> input;


  while (cin >> input) {
      //cout << "Enter a number: ";
    if(input > largest) {
      largest = input;
    }
  }
*/




  //cout << "Largest number was " << largest <<"\n";

  return 0;
}