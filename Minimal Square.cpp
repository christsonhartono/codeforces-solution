#include<iostream>
using namespace std;

int main(){
	int t,a,b,test;
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>a>>b;
		
		int min = (a<b)?a:b;
		int max = (a>b)?a:b;
		test = min*2;
		
		if(test>=max){
			cout<<test*test<<endl;
		}else{
			cout<<max*max<<endl;
		}
	}
	return 0;
}
