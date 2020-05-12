#include<iostream>
using namespace std;

int main(){
	int n;
	int solved = 0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int arr[3];
		int count = 0;
		
		for(int j=0; j<3; j++){
			cin>>arr[j];
			if(arr[j]==1)count++;
		}
		
		if(count>1){
			solved++;
		}
	}
	
	cout<<solved<<endl;
	
	return 0;
}
