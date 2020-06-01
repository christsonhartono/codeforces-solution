#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n;
		
		if(n<3){
			cout<<0<<endl;
		}else if(n%2==0){
			cout<<(n/2)-1<<endl;
		}else if(n%2==1){
			cout<<(n/2)<<endl;
		}
	}
	return 0;
}
