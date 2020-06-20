#include<bits/stdc++.h>
using namespace std;

int findMin(int *arr, int start, int end){
	int min  = arr[start];
	for(int i=start; i<end; i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}	
	return min;
}

int main(){
	int inp, n;
	int arr[4]={0};
	int ch[10000] = {0};
	int cek[10000] = {0};
	int child[10000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>inp;
		ch[i] = inp;
		arr[inp]++;	
	}
	
	int result = findMin(arr, 1, 4);
	cout<<result<<endl;
	
	if(result>0){
		for(int i=0; i<result; i++){
			for(int j=0; j<n; j++){
				if(ch[j]==1 && cek[j]==0){
					cout<<j+1<<" ";
					cek[j] = 1;
					break;
				}
			}
			for(int j=0; j<n; j++){
				if(ch[j]==2 && cek[j]==0){
					cout<<j+1<<" ";
					cek[j] = 1;
					break;
				}
			}
			for(int j=0; j<n; j++){
				if(ch[j]==3 && cek[j]==0){
					cout<<j+1;
					cek[j] = 1;
					break;
				}
			}
			cout<<"\n";			
		}
		
	}
	return 0;
}
