#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int alpha[26] = {0};
	char str[1000];
	
	cin>>n;
	cin>>str;
	for(int i=0; i<n; i++){
		int idx = tolower(str[i])-'a';
		alpha[idx]++;
	}
	
	for(int i=0; i<26; i++){
		if(alpha[i]==0){
			cout<<"NO"<<endl;
			break;
		}else if(i==25){
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
