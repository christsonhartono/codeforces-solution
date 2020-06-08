#include<iostream>
using namespace std;

int main(){
	int untreated = 0;
	int n, c, police=0;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>c;
		
		if(c>0){
			police+=c;
		}else if( c==-1){
			if(police==0){
				untreated++;
			}else{
				police--;
			}
		}
	}
	
	cout<<untreated<<"\n";
	return 0;
}
