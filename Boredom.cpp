#include<bits/stdc++.h>
using namespace std;

long long int arr[100000] = {0};

long long int maxPoint(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return arr[1];
	}
	
	for(int i=2; i<=n; i++){
		arr[i] = max(arr[i-1], arr[i-2] + i*arr[i]);
	}
	
	return arr[n];
}

int main(){
	int n,max=-1;
	long long int a;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		arr[a]++;
		if(a>max){
			max = a;
		}
	}
	
	cout<<maxPoint(max);
	return 0;
}
