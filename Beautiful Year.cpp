#include<iostream>
using namespace std;

int cek(int year){
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	
	while(year>0){
		if(arr[year%10]==1){
			return 0;
		}
		arr[year%10]=1;
		year/=10;
	}
	return 1;
}

int main(){
	int year;
	cin>>year;
	
	while(true){
		year++;
		if(cek(year)==1){
			cout<<year<<endl;
			break;
		}	
	}	
	return 0;
}
