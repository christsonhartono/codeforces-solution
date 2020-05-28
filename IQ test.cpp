#include<iostream>
using namespace std;

int main(){
	int n,t;
	int firstEven=-1, firstOdd=-1;
	int nEven=0, nOdd=0;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>t;
		
		(t%2==0)? nEven++ : nOdd++;
		
		if(t%2==1 && firstOdd==-1){
			firstOdd = i+1;
		}else if(t%2==0 && firstEven==-1){
			firstEven = i+1;
		}
	}
	
	if(nEven < nOdd){
		cout<<firstEven<<endl;
	}else{
		cout<<firstOdd<<endl;
	}
	
	return 0;
}
