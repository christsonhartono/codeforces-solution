#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	
	cin>>t;
	for(int i=0; i<t; i++){
		int pos = 2;
		char b[10000]="", a[10000]="";
		
		cin>>b;
		
		a[0] = b[0];
		a[1] = b[1];
		
		for(int i=3; i<strlen(b); i+=2){
			a[pos] = b[i];
			pos++;
		}
		
		cout<<a<<endl;
	}
	return 0;
}
