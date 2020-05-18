#include<bits/stdc++.h>
using namespace std;

void copyto(char *que, char *newque, int n){
	for(int i=0; i<n; i++){
		que[i] = newque[i];
	}
}

int main(){
	int n, t;
	char que[100];
	
	cin>>n>>t;
	cin>>que;
	
	while(t>0){
		char newque[100];
		for(int i=0; i<n; i++){
			if(que[i]=='B' && que[i+1]=='G' && i!=n-1){
				newque[i] = que[i+1];
				newque[i+1] = que[i];
				i++;
			}else{
				newque[i] = que[i];
			}
		}
		copyto(que, newque, n);
		t--;
	}
	
	for(int i=0; i<n; i++){
		cout<<que[i];
	}
	return 0;
}
