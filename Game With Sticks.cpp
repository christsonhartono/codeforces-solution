#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,m,max;
	cin>>a>>m;
	
	max = (a>m)?m:a;
	
	if(max%2==1){
		cout<<"Akshat"<<endl;
	}else{
		cout<<"Malvika"<<endl;
	}
	
	return 0;
}
