#include<iostream>
using namespace std;

int main() {
  double thisYearFee, lastYearFee, percentage;

  cout << "Please enter last year's tuition fee: ";
  cin >> lastYearFee;

  cout << "Please enter this year's tuition fee: ";
  cin >> thisYearFee;

  percentage = (thisYearFee - lastYearFee)/lastYearFee;

  cout << "The tuition increases " << percentage*100 << "%.\n";
  return 0;
}