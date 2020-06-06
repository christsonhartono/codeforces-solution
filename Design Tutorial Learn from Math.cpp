#include<bits/stdc++.h>
using namespace std;

int cek(int x, int y){
	int pass = 0;
	for(int i=2; i<=x/2; i++){
		if(x%i==0){
			pass++;
			break;
		}
 	}
	for(int i=2; i<=y/2; i++){
		if(y%i==0){
			pass++;
			break;
		}
	}
	
	return (pass==2)?1:0;
}

int main(){
	int n,x,y;
	cin>>n;
	
	x = n/2;
		
	for(int i=x; i>3; i--){
		y = n-i;
		if(cek(i,y)==1){
			cout<<i<<" "<<y<<endl;
			break;
		}
	}
	
	return 0;
}
