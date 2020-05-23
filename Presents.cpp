#include<iostream>
using namespace std;

int main(){
	int n,p;
	int arr[1000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>p;
		arr[p-1] = i+1;
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
