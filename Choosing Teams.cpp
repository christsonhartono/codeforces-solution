#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, k, teams=0;
	int arr[10000];
	
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	for(int i=2; i<n; i+=3){
		if(arr[i]+k<=5){
			teams++;
		}else{
			break;
		}
	}
	
	cout<<teams<<endl;
	return 0;
}
