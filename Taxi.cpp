#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,count=0;
	int taxi[5] = {0};
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		taxi[s]+=1;
	}
	
	taxi[1] = taxi[1]-taxi[3];
	count = count+taxi[4]+taxi[3]+taxi[2]/2;
	
	if(taxi[2]%2==1){
		count+=1;
		taxi[1]-=2;
	}
	if(taxi[1]>0){
		count = count+(taxi[1]+3)/4;
	}
	
	cout<<count<<endl;
	return 0;
}
