#include<iostream> 
#include<vector>
#include<algorithm> 
using std::cin;
using std::cout;
using namespace std;

size_t indexOfSmallest(const vector<int>& V, size_t start); 
void sort(vector<int>& V);

int main() {
	vector<int> V = {2,1,5,3,6};
	size_t s = 0; 
//	size_t smallest = indexOfSmallest(V,s);
//	cout << smallest << "\n";
	sort(V);
	
}

size_t indexOfSmallest(const vector<int>& V, size_t start) {
	size_t iMin = start;
	for(size_t i = start+1; i<V.size(); i++){
		if(V[i] < V[iMin]){
			iMin = i;//getting the index of the smallest # we've seen so far 
		} 
	}
	return iMin;
}

void sort(vector<int>& V) {
	for(int i=0;i<V.size()-1; i++){
		size_t smallestIndex = indexOfSmallest(V,i);
			swap(V[i],V[smallestIndex]);
			cout << V[i] << " \n";
		}
}
