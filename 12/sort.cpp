/*#include<iostream>
#include<vector>
using namespace::std;

void merge(const vector<int>& V1, const vector<int>& V2, vector<int>& result);

int main() {
	vector<int> V1 = {1,4,2,6};
	vector<int> V2 = {10,20,102};
	vector<int> R;
	merge(V1,V2,R);
}

void merge(const vector<int>& V1,const vector<int>& V2, vector<int>& result){
	size_t vec1 = V1.size();
	size_t vec2 = V2.size();

	for(size_t i = 0; i < vec1; i++){
		result.push_back(V1[i]);
	//	cout <<result[i] <<"\n";
	}
	for(size_t j = 0; j<vec2; j++){
		result.push_back(V2[j]);
	}
	for(size_t k = 0; k<result.size(); k++){
		cout << result[k] << "\n";
	}
	return 0;
}

void sort(vector<int>& sort){
	size_t s = sort.size();
	for(size_t i = 0
}
*/