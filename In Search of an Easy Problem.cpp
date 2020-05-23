#include<iostream>
using namespace std;

int main(){
	int n, cond=0;
	int p[1000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>p[i];
		if(p[i]==1){
			cond=1;
		}
	}
	
	if(cond==1)
		cout<<"HARD"<<endl;
	else
		cout<<"EASY"<<endl;
		
	return 0;
}
