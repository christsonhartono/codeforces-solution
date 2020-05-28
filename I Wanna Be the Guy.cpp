#include<iostream>
using namespace std;

int main(){
	int n,p,q,t;
	int lv[1000];
	
	cin>>n;
	for(int i=0;i<n;i++)lv[i]=0;
	
	cin>>p;
	for(int i=0;i<p;i++){
		cin>>t;
		lv[t-1]=1;
	}
	
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>t;
		lv[t-1]=1;
	}
	
	for(int i=0; i<n; i++){
		if(lv[i]==0){
			cout<<"Oh, my keyboard!"<<endl;
			break;
		}else if(i==n-1){
			cout<<"I become the guy."<<endl;
		}
	}
	
	return 0;
}
