#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,min;
	int puzzles[10000];
	
	cin>>n>>m;
	for(int i=0; i<m; i++){
		cin>>puzzles[i];
	}
	
	sort(puzzles, puzzles+m);
	for(int i=0; i<m-n+1; i++){
		if(i==0){
			min = puzzles[i+n-1]-puzzles[i];
		}else{
			int temp = puzzles[i+n-1]-puzzles[i];
			min = (temp<min)?temp:min;
		}
	}
	
	cout<<min<<endl;
	return 0;
}
