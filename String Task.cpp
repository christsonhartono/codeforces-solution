#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[200];
	cin>>str;
	
	for(int i=0; i<strlen(str); i++){
		if(isupper(str[i])){
			str[i] = tolower(str[i]);
		}
		if(str[i]!='a' && str[i]!='o' && str[i]!='y' && str[i]!='e'&& str[i]!='u'&& str[i]!='i'){
			cout<<"."<<str[i];
		}
	}
	return 0;
}
