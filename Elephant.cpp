#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, step=0;
	
	cin>>x;
	
	for(int i=5; i>0; i--){
		if(x>=i){
			step = step + x/i;
			x%=i;
		}
		if(x==0){
			break;
		}
	}
	
	cout<<step<<endl;
	
	return 0;
}
