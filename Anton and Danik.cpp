#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a=0, d=0;
	char s[100001];
	
	cin>>n;
	cin>>s;
	
	for(int i=0; i<n; i++){
		if(s[i]=='A')
			a++;
		else
			d++;
	}
	
	if(a>d){
		cout<<"Anton"<<endl;
	}else if(d>a){
		cout<<"Danik"<<endl;
	}else if(d==a){
		cout<<"Friendship"<<endl;
	}
	
	return 0;
}
