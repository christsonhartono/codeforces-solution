#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(double x){
	if(x==1){
		return false;
	}else if(x==2){
		return true;
	}
	if(int(x)%2==0)
		return false;
	
	int lim=sqrt(x);
	for(int i=3; i<=lim; i++){
		if(int(x)%i==0){
			return false;
		}
	}

	return true;
}

int main(){
	int n;
	long long int x[100000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x[i];
	}
	
	for(int i=0; i<n; i++){
		double root = sqrt(x[i]);
		double test = root-floor(root);
	
		if(test==0){
			if(isPrime(root)){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
