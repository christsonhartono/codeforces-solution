#include<bits/stdc++.h>
#define iter(a,b,i) for(int i=a; i<b; i++)
using namespace std;

int main(){
	int d, count=0;
	int klmn[6];
	int dragon[100000];
	
	iter(1,5,i){
		cin>>klmn[i];
	}
	
	cin>>d;
	
	iter(0, d+1, i){
		dragon[i] = 0;
	}
	
	iter(1,5,i){
		iter(1, (d/klmn[i])+1, j){
			dragon[klmn[i]*j] = 1;
		}
	}
	
	iter(1, d+1, i){
		if(dragon[i]==1)count++;
	}
	
	cout<<count<<endl;
	return 0;
}
