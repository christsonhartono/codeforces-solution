#include<iostream>
using namespace std;

long long power(long long n, int p){
	long long temp = n;
	for(int i=1; i<p; i++){
		n*=temp;
	}
	return n;
}

int main(){
	long long t,n,x,div;
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>x;
		if(x%3==0){
			cout<<x/3<<endl;
		}else{
			int idx=1;
			while(true){
				div = 3+4*(power(2,idx)-1);
		
				if(x%div==0){
					cout<<x/div<<endl;
					break;
				}
				idx+=1; 
			}			
		}
	}
	return 0;
}
