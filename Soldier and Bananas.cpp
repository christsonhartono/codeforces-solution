#include<iostream>
using namespace std;

int main(){
	long long int k,n,w;
	cin>>k>>n>>w;
	
	long long int totalMoney = (w*(2*k+(w-1)*k))/2;
	totalMoney-=n;
	
	if(totalMoney>0){
		cout<<totalMoney<<endl;
	}else{
		cout<<0<<endl;
	}
	
	return 0;
}
