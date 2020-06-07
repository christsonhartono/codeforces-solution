#include<iostream>
using namespace std;

int main(){
	int n, a;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a%2==1 || (a/2)%2==1){
			cout<<"NO";
		}else{
			cout<<"YES"<<endl;
			for(int j=0; j<a/2; j++){
				cout<<(j+1)*2<<" ";
			}
			for(int j=0; j<a/2; j++){
				if(j==a/2-1){
					cout<<(3*a/2)-1;
				}else{
					cout<<(2*j)+1<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
