#include<bits/stdc++.h>
#define iter(a,b,i) for(int i=a; i<b; i++)
using namespace std;

int main(){
	int t,n,k;
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>k;
		
		int a[100];
		int b[100];
		
		iter(0,n,j){
			cin>>a[j];
		}
		iter(0,n,j){
			cin>>b[j];
		}
		
		sort(a, a+n);
		sort(b, b+n);
		
		int sum = 0;
		int leftIdx = 0;
		int rightIdx = n-1;
		
		while(k>0){
			if(a[leftIdx]<b[rightIdx]){
				swap(a[leftIdx], b[rightIdx]);
				leftIdx++;
				rightIdx--;			
				k--;	
			}else{
				break;
			}
		}
		
		iter(0,n,j){
			sum+=a[j];
		}
		
		cout<<sum<<endl;
	}
	
	return 0;
}
