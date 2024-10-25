#include<iostream> 
#include<vector> 
using std::cout;
using std::cin;
using namespace::std;

void even(const vector<int>& V);
void duplicates(const vector<int>& V);

int main(){
//	vector<int> B = {1,2,3,4,5,6,7,8,9,10,20304,203,212,3324,1121412};
//	even(B);
	vector<int> V = {1,1,2,2,3,3,11,11,31,425,112,1,112,53,3};
	duplicates(V);
	return 0;
}
void even(vector<int>& V){
	size_t n = V.size(); 
	int j = 0;
	vector<int> E; 
	for(size_t i = 0; i<n; i++){
		if(V[i]%2 == 0) { 
			E.push_back(V[i]);
			cout << E[j] << " "; 
			j++;
		}
	}
	cout << "\n";
}

void duplicates(const vector<int>& V){
	size_t n = V.size(); 
	vector<int> E; 
	E.push_back(V[0]);
	for(size_t i = 1; i<n; i++){
		bool isDupe = false;
		for(size_t j=0; j<E.size(); j++){
			if(E[j] == V[i]){
				isDupe = true;
				break;
			}
		}
		if(!isDupe){
			E.push_back(V[i]);
		}
	}
	size_t m = E.size(); 
	for(size_t i = 0; i<m; i++){
		cout << E[i] << "\n";
	}
}

