#include<iostream> 
using std::cout;
using std::cin;

int main(){
	int n,an,anp1,anm1,N;
	n = 1; 
	anm1=1;
	an=1;
	anp1=2;
	cin >> N; 
	while(n<N){
		anm1 = an;
		an = anp1; 
		anp1 = an+anm1; 
		n++;
	}
	cout << an << "\n";
}
