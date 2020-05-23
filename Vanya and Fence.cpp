#include<iostream>
using namespace std;

int main(){
	int n,h,w=0;
	int a[10000];
	
	cin>>n>>h;
	for(int i=0; i<n; i++){
		cin>>a[i];
		
		if(a[i]>h)
			w+=2;
		else
			w++;
	}
	
	cout<<w<<endl;
	return 0;
}
