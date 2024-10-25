#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
void merge(const vector<int>& V1, const vector<int>& V2, vector<int>& result);
int main() {
  vector<int> V1 = {1,3,5,7,101};
  vector<int> V2 = {2,4,6,8,10,12,14};
  vector<int> R;
  merge(V1,V2,R);
  return 0;
  }
void merge(const vector<int>& V1, const vector<int>& V2, vector<int>& result){
  size_t i1=0, i2=0;
  while(i1<V1.size() && i2<V2.size()){
    if(V1[i1]<V2[i2]){
      result.push_back(V1[i1]);
      i1++;
      }
    else {
      result.push_back(V2[i2]);
      i2++;
      }
    }
  while(i1<V1.size()){
    result.push_back(V1[i1]);
    i1++;
    }
  while(i2<V2.size()){
    result.push_back(V2[i2]);
    i2++;
    }
  for(size_t i=0; i<result.size(); i++) {
    cout << result[i] << " \n";
    }
}