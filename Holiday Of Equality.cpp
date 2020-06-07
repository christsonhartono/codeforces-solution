#include<iostream>
using namespace std;

int main(){
	int n, a, sum=0, max=0;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		sum+=a;
		max = (a>max)?a:max;
	}
	
	cout<<((max*n)-sum)<<endl;
	return 0;
}
