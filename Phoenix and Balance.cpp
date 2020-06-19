#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t,n,leftSum, rightSum;
	int arr[50];
	int init = 1;
	
	for(int i=0; i<31; i++){
		arr[i] = init;
		init<<=1;
	}
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n;
		leftSum = 0;
		rightSum=arr[n];
		
		int remain = n/2-1;
		
		int idx = 1;
		while(remain>0){
			rightSum+=arr[idx];
			idx++;
			remain--;
		}
		while(idx<n){
			leftSum+=arr[idx];
			idx++;
		}
		cout<<abs(leftSum-rightSum)<<endl;
	}
	
	
	return 0;
}
