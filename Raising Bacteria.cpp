#include<iostream>
using namespace std;

int find_min_bacteria(int x){
	if(x==1){
		return 1;
	}else{
		if(x%2==0){
			return 0+find_min_bacteria(x/2);
		}else{
			return 1+find_min_bacteria((x-1)/2);
		}
	}
}

int main(){
	int x;
	cin>>x;	
	cout<<find_min_bacteria(x)<<endl;
	
	return 0;
}
