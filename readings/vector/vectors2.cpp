#include<iostream> 
#include<vector>
using std::cin; 
using std::cout; 
using namespace::std;

bool search(const vector<int>& V,int x);
int main(){
	vector<int> test = {1,2,3,4,5};
	int x; 
	cin >> x;
	bool found = search(test,x);
}

bool search(const vector<int>& V, int x){
	size_t n = V.size(); 
	for(size_t i = 0; i < n; i++){
		if(V[i] == x) {
			cout << "true!" << "\n";
			return true;
		}

	} 
	cout << "false :(" << "\n";
	return false; 
}
