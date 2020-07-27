#include<bits/stdc++.h>
using namespace std;

int arr[100000];

int maxRibbon(int n, int a, int b, int c){
	int testA, testB, testC;
	arr[0] = 0;
	
	for(int i=1; i<=n; i++){
		testA=testB=testC=-1;
		
		if(i>=a)
			testA = arr[i-a];
			
		if(i>=b)
			testB = arr[i-b];
			
		if(i>=c)
			testC = arr[i-c];
			
		if(testA==-1 && testB==-1 && testC==-1)
			arr[i] = -1;
		else
			arr[i] = max(max(testA,testB),testC)+1;
	}
	return arr[n];
}

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	
	cout<<maxRibbon(n,a,b,c);
	return 0;
}
