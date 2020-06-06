#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[1000];
	int t,n;
	
	cin>>t;
	
	for(int i=0; i<t; i++){
		cin>>n;
		
		int count=0, mul=1;
		while(n>0){
			if(n%10!=0){
				arr[count]=(n%10)*mul;
				count++;
			}
			n/=10;
			mul*=10;
		}
		
		cout<<count<<endl;
		for(int j = count-1; j>=0; j--){
			cout<<arr[j]<<" ";
			if(j==0){
				cout<<"\n";
			}
		}
	}
	return 0;
}
