#include<iostream>
using namespace std;

long int decrease(long int n, int k){
	if(k>0){
		if(n%10==0){
			n/=10;
			k-=1;
			return decrease(n, k);
		}else{
			n-=1;
			k-=1;
			return decrease(n, k);
		}
	}
	return n;
}

int main(){
	long int n;
	int k;
	cin>>n>>k;
	
	cout<<decrease(n, k)<<endl;
	return 0;
}
