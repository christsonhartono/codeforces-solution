#include<bits/stdc++.h>
using namespace std;

int main(){
	long int s, sz=0;
	long int shoes[4];
	
	for(int i=0; i<4; i++){
		cin>>s;
		
		if(i==0){
			shoes[sz] = s;
			sz++;
		}else{
			for(int j=0; j<sz; j++){
				if(shoes[j]==s){
					break;
				}else if(j==sz-1){
					shoes[sz] = s;
					sz++;
				}
			}
		}
	}
	
	cout<<4-sz<<endl;
	return 0;
}
