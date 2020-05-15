#include<bits/stdc++.h>
using namespace std;

int cek(int n){
	int cond=1;
	
	while(n>0){
		if(n%10!=4 && n%10!=7){
			cond=0;
			break;
		}
		n/=10;
	}
	return cond;
}

int main(){
	int arr[10000];
	int n, cond=0, idx=0;
	scanf("%d", &n);
	
	for(int i=1; i<1001; i++){
		if(cek(i)==1){
			arr[idx]=i;
			idx++;
		}
	}

	for(int i=0; i<idx; i++){
		if(n%arr[i]==0){
			cond=1;
			break;
		}
	}
	
	if(cond==1)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;
}
