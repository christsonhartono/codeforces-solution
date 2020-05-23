#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n, count=0;
	char prev[3]="";
	char magnet[3];
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>magnet;
		
		if(strcmp(prev, magnet)!=0){
			count++;
		}
		
		strcpy(prev, magnet);
	}	
	
	cout<<count<<endl;
	return 0;
}
