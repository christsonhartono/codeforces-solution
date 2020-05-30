#include<bits/stdc++.h>
using namespace std;

int main(){
	int alpha[26] = {0};
	int count[26] = {0};
	string guest, host, letter;
	
	cin>>guest;
	cin>>host;
	cin>>letter;
	
	int maxLen = (guest.size() > host.size())? guest.size() : host.size();
	for(int i=0; i<maxLen; i++){
		if(i<guest.size()){
			alpha[guest.at(i)-'A']++;
		}
		if(i<host.size()){
			alpha[host.at(i)-'A']++;
		}
	}
	
	for(int i=0; i<letter.size(); i++){
		count[letter.at(i)-'A']++;
	}
	
	for(int i=0; i<26; i++){
		if(alpha[i]!=count[i]){
			cout<<"NO"<<endl;
			break;
		}else if(i==25){
			int totalLen = guest.size() + host.size();
			if(totalLen == letter.size()){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	
	return 0;
}
