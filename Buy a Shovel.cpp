#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,r;
	cin>>k>>r;
	
	k%=10;
	for(int i=1; i<11; i++){
		if((k*i)%10==0){
			cout<<i<<endl;
			break;
		}else if(((k*i)%10)-r==0){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
