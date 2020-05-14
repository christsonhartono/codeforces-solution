#include<bits/stdc++.h>
using namespace std;

int main(){
	string player;
	cin>>player;
	
	int cond=0;
	int len = player.size();
	
	for(int i=0; i<len; i++){
		if(i+7<len){
			for(int j=i+1; j<=i+7; j++){
				cond=1;
				if(player.at(i)==player.at(j)){
					cond=0;
					break;
				}
			}
		}
		if(cond==1){
			break;
		}
		
		if(i>6){
			for(int j=i-1; j>=i-7; j--){
				cond=1;
				if(player.at(i)==player.at(j)){
					cond=0;
					break;
				}
			}
		}
		if(cond==1){
			break;
		}
	}
	
	if(cond==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
