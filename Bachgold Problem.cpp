#include<iostream>
using namespace std;

int main(){
	int n, a=0, b=0;
	
	cin>>n;
	if(n%2==0){
		a = n/2;
	}else{
		b = 1;
		n-=3;
		a = n/2;
	}
	
	cout<<(a+b)<<endl;
	for(int i=0; i<a; i++){
		cout<<2<<" ";
	}
	for(int i=0; i<b; i++){
		cout<<3<<" ";
	}
	return 0;
}
