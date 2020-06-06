#include<bits/stdc++.h>
using namespace std;

int main(){
	long int n, t, a, cur=1;
	long int arr[100000]={0};
	arr[1] = 1;
	
	cin>>n>>t;
	
	for(int i=1; i<n; i++){
		cin>>a;
		if(cur==i){
			cur+=a;
			arr[cur] = 1;
		}
	}

	
	if(arr[t]==1){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	
	return 0;
}
