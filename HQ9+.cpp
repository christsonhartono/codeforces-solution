#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int found=0;
	char p[102];
	cin>>p;
	
	for(int i=0; i<strlen(p); i++){
		if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
			found=1;
			break;
		}
	}
	
	if(found==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}
