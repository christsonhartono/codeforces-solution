#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin>>s1;
	cin>>s2;
	
	for(int i=0; i<s1.size(); i++){
		if(tolower(s1.at(i)) > tolower(s2.at(i))){
			cout<<1<<endl;
			break;
		}else if(tolower(s1.at(i)) < tolower(s2.at(i))){
			cout<<-1<<endl;
			break;
		}else if(i==(s1.size()-1) && tolower(s1.at(i))==tolower(s2.at(i))){
			cout<<0<<endl;
		}
	}
	return 0;
}
