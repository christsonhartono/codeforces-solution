#include<iostream>
using namespace std;

int main(){
	int n, max=1, count=1;
	long int arr[100000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		
		if(i>0){
			if(arr[i-1]<=arr[i]){
				count++;
				if(count>max){
					max=count;
				}
			}else{
				count = 1;
			}
		}
		
	}
	
	cout<<max<<endl;
	return 0;
}
