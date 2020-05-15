#include<iostream>
using namespace std;

int main(){
	int n, prev=0, max=-1, cur=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
		cur = b-a+prev;
		prev = cur;
		
		if(cur>max)	
			max = cur;
	}
	
	cout<<max<<endl;
	return 0;
}
