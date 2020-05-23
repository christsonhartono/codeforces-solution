#include<iostream>
#include<string>
using namespace std;

void hulk(int start, int n){
	if(start==1){
		cout<<"I hate ";
	}else if(start%2==0){
		cout<<"I love ";
	}else if(start%2==1){
		cout<<"I hate ";
	}
	
	if(start==n){
		cout<<"it ";
	}else{
		cout<<"that ";
		
		start+=1;
		hulk(start, n);
	}
}

int main(){
	int n;
	cin>>n;
	
	hulk(1,n);
	return 0;
}
