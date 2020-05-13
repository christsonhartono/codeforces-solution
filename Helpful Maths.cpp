#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int left, int mid, int right){
	int lsize = mid-left+1;
	int rsize = right-mid;
	
	int leftArr[lsize];
	int rightArr[rsize];
	
	for(int i=0; i<lsize; i++){
		leftArr[i] = arr[left+i];
	}
	for(int j=0; j<rsize; j++){
		rightArr[j] = arr[mid+1+j];
	}
	
	int i=0, j=0, k=left;
	while(i<lsize && j<rsize){
		if(leftArr[i] <= rightArr[j]){
			arr[k] = leftArr[i];
			i++;
		}else{
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}
	
	while(i<lsize){
		arr[k] = leftArr[i];
		i++;
		k++;
	}
	
	while(j<rsize){
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}

void mergeSort(int *arr, int left, int right){
	if(left<right){
		int mid = left+(right-left)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main(){
	int arr[1000];
	int idx=0;
	string s;
	cin>>s;
	
	for(int i=0; i<s.size(); i++){
		if(isdigit(s.at(i))){
			arr[idx] = s.at(i)-'0';
			idx++;
		}
	}

	mergeSort(arr, 0, idx-1);
	
	for(int i=0; i<idx; i++){
		cout<<arr[i];
		if(i!=idx-1){
			cout<<"+";
		}
	}
	return 0;
}
