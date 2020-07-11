#include<iostream>
using namespace std;

int main(){
	int a,b,time=0,count=0;
	
	cin>>a>>b;
	
	while(a>0){
		time++;
		a--;
		count++;
		if(count==b){
			a++;
			count=0;
		}
	}
	
	cout<<time<<endl;
	
	return 0;
}
