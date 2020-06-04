#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, min, max, count=0;
	int arr[10000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		
		if(i==0){
			min = max = arr[i];
		}else if(min < arr[i]){
			min = arr[i];
			count++;
		}else if(max > arr[i]){
			max = arr[i];
			count++;
		}
	}
	
	cout<<count<<endl;
	
	return 0;
}
