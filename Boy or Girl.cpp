#include<bits/stdc++.h>
using namespace std;

int main(){
	char name[1000];
	int alpha[26];
	
	for(int i=0; i<26; i++){
		alpha[i] = 0;
	}
	
	cin>>name;
	
	for(int i=0; i<strlen(name); i++){
		int idx = name[i]-'a';
		alpha[idx]++;
	}
	
	int sum = 0;
	for(int i=0; i<26; i++){
		if(alpha[i]>0){
			sum++;
		}
	}
	
	if(sum%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}
