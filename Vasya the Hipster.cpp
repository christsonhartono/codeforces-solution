#include<iostream>
using namespace std;

int main(){
	int a,b,min,max;
	cin>>a>>b;
	
	min = (a<b)?a:b;
	max = (a>b)?a:b;
	
	cout<<min<<" "<<(max-min)/2;
	return 0;
}
