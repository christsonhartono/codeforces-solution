#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, leng;
	double d, distance=0;
	double arr[10000];
	
	cin>>n>>leng;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	
	d = (arr[0]>(leng - arr[n-1])) ? arr[0] : (leng - arr[n-1]);
	d*=2;
	
	for(int i=0; i<n; i++){
		distance = arr[i+1]-arr[i];
		d = (distance>d)? distance:d;
	}
	
	printf("%.9lf\n", d/2);
	return 0;
}
