#include<bits/stdc++.h>
using namespace std;

void printUpperCase(string s){
	for(int i=0; i<s.size(); i++){
		cout<<char(toupper(s.at(i)));
	}	
}

void printLowerCase(string s){
	for(int i=0; i<s.size(); i++){
		cout<<char(tolower(s.at(i)));
	}	
}

int main(){
	string str;
	cin>>str;
	
	int lowerc=0, upperc=0;
	
	for(int i=0; i<str.size(); i++){
		if(islower(str[i]))
			lowerc++;
		else
			upperc++;
	}
	
	if(lowerc>=upperc){
		printLowerCase(str);
	}else{
		printUpperCase(str);
	}
	return 0;
}
