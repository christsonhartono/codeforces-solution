#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,pos;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>pos;
			if(pos==1){
				x = i+1;
				y = j+1;
			}
		}
	}
	cout<<abs(3-x)+abs(3-y);
	return 0;
}
