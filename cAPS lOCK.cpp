#include<bits/stdc++.h>
using namespace std;

int cek(char *word){
	for(int i=strlen(word)-1; i>=1; i--){
		if(isupper(word[i])==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	char word[102];
	cin>>word;
	
	if(cek(word)!=0){
		for(int i=0; i<strlen(word); i++){
			if(isupper(word[i])>0){
				word[i] = tolower(word[i]);
			}else{
				word[i] = toupper(word[i]);
			}
		}
	}
	
	cout<<word<<endl;
	return 0;
}
