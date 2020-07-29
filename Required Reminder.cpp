#include<iostream>
using namespace std;

int main(){
	long long int x,y,n,t,test;
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>x>>y>>n;
		
		test = n%x;
		test = n-test;
		test = test+y;
		if(test>n){
			test = test-x;
		}
		cout<<test<<endl;
		
	}
	return 0;
}
