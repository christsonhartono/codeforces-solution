#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i=1,sock=0;
	cin>>n>>m;
	
	while(n>0){
		n--;
		if(i%m==0){
			n++;
		}
		i++;
		sock++;
	}
	
	cout<<sock<<"\n";
	return 0;
}
