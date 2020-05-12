#include<iostream>
using namespace std;

int main(){
	int arr[1000];
	int n,k;
	int loc = 0;
	cin>>n>>k;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
		
		if(i>=k-1 && arr[i]>0){
			if(arr[i]>=arr[k-1]){
				loc++;
			}
		}else if(arr[i]>0){
			loc++;
		}
	
	}
	
	cout<<loc<<endl;
	
	return 0;
}
