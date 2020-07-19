#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	map<string,int> request;
	
	cin>>n;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		
		if(request.count(s)==0){
			cout<<"OK"<<endl;
			request[s]=0;
		}else{
			request[s]+=1;
			cout<<s<<request[s]<<endl;
		}
	}
	
	return 0;
}
