#include<iostream>
using namespace std;

int main(){
	long long int n,k,mid,result;
	cin>>n>>k;
	
	if(n%2==0){
		mid = n/2;
		
		if(k>mid){
			cout<<(k-mid)*2<<endl;
		}else{
			cout<<k*2-1<<endl;
		}
	}else{
		mid = n/2+1;
		
		if(k>mid){
			cout<<(k-mid)*2<<endl;
		}else{
			cout<<k*2-1<<endl;
		}
	}
	return 0;
}
