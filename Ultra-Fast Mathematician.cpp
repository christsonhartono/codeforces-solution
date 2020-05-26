#include<bits/stdc++.h>
#define iter(a,b,i) for(int i=a; i<b; i++)
using namespace std;

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	iter(0,s1.size(),i){
		if(s1.at(i)!=s2.at(i)){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	return 0;
}
