#include<iostream>
using namespace std;

int main(){
	int n,a,b;
	cin>>n;
	
	if(n>=0){
		cout<<n;
	}else if(n<0){
		a = n/10;
		b = ((a-(a%10))+(n%10));
		
		if(a>b){
			cout<<a;
		}else{
			cout<<b;
		}
	}
	return 0;
}
