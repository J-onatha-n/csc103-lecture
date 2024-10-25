#include <iostream>
#include <vector>
using namespace::std;

string undupe(const string& s);
int main() {
  string s = "hello world";
  string result;
  result = undupe(s);
  cout << result <<"\n";
  }
string undupe(const string& s){
  vector<size_t> V;
  V.resize(256,0);
  for(size_t i = 0; i<s.size(); i++){
    V[s[i]]++;
    }
  string u;
  for(size_t i = 0; i<s.size(); i++) {
    if(V[s[i]]==1){
      u+=s[i];
      }
    }
  return u;

}
