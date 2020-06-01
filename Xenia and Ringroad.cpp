#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,m,a,prev,time=0;
	
	cin>>n>>m;
	for(int i=0; i<m; i++){
		cin>>a;
		
		if(i==0){
			time = time + a-1;
		}else if(prev<=a){
			time = time + a-prev;
		}else{
			time = time + a-prev+n;
		}
		
		prev = a;
	}
	
	cout<<time<<endl;
	
	return 0;
}
