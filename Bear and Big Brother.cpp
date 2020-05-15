#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, idx=1;
	cin>>a>>b;
	
	while(true){
		a*=3;
		b*=2;
		if(a>b){
			cout<<idx;
			break;
		}
		idx++;
	}
	
	return 0;
}
