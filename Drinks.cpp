#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double p, vol=0;
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>p;
		vol+=p;
	}
	
	vol = vol/(double)n;
	
	printf("%.10lf", vol);
	
	return 0;
}
