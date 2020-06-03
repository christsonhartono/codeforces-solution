#include<iostream>
using namespace std;

int main(){
	int n, minCoin=0;
	cin>>n;
	
	minCoin+= n/100;
	n%=100;
	
	minCoin+= n/20;
	n%=20;
	
	minCoin+= n/10;
	n%=10;
	
	minCoin+= n/5;
	n%=5;
	
	minCoin+= n/1;
	n%=1;
	
	cout<<minCoin<<endl;
	
	return 0;
}
