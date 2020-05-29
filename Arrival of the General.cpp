#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, min, max;
	int minIdx, maxIdx;
	int arr[1000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		
		if(i==0){
			max=arr[i];
			maxIdx=i;
		}else if(arr[i]>max){
			max = arr[i];
			maxIdx = i;
		}
	}
	
	for(int i=n-1; i>=0; i--){
		if(i==n-1){
			min = arr[i];
			minIdx = i;
		}else if(arr[i] < min){
			min = arr[i];
			minIdx = i;
		}
	}
	
	if(maxIdx < minIdx){
		cout<<(maxIdx+n-1-minIdx);
	}else{
		cout<<(maxIdx+n-2-minIdx);
	}
	return 0;
}
