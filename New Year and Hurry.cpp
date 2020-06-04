#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	k = 240-k;
	
	for(int i=1; i<=n; i++){
		k = k - (i*5);
		if(k==0){
			cout<<i<<endl;
			break; 
		}else if(k<0){
			cout<<i-1<<endl;
			break;
		}else if(i==n){
			cout<<i<<endl;
		}
	}
	return 0;
}
