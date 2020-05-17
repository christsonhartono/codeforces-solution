#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int left, int mid, int right){
	int leftSize = mid-left+1;
	int rightSize = right-mid;
	
	int leftArr[leftSize], rightArr[rightSize];
	
	for(int i=0; i<leftSize; i++){
		leftArr[i] = arr[left+i];
	}
	
	for(int i=0; i<rightSize; i++){
		rightArr[i] = arr[mid+1+i];
	}
	
	int i=0, j=0, k=left;
	while(i<leftSize && j<rightSize){
		if(leftArr[i]>=rightArr[j]){
			arr[k] = leftArr[i];
			i++;
		}else{
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}
	
	while(i<leftSize){
		arr[k] = leftArr[i];
		k++;
		i++;
	}
	
	while(j<rightSize){
		arr[k] = rightArr[j];
		k++;
		j++;
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
	int n, test, sum=0, sumLeft=0, count=0;
	int arr[1000];
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	mergeSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++){
		sumLeft+=arr[i];
		test = sum-sumLeft;
		count++;
		
		if(sumLeft>test)
			break;
	}
	
	cout<<count<<endl;
	return 0;
}
