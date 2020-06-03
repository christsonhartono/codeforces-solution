#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m,cond=1;
	cin>>n>>m;

	for(int i=0; i<n; i++){
		if(i%2==0){
			for(int j=0; j<m; j++){
				cout<<"#";
			}
		}else if(i%2==1){
			if(cond==1){
				for(int j=0; j<m; j++){
					if(j==m-1)
						cout<<"#";
					else
						cout<<".";
				}
			}else if(cond==-1){
				for(int j=0; j<m; j++){
					if(j==0)
						cout<<"#";
					else
						cout<<".";
				}
			}
			cond*=-1;
		}
		cout<<endl;
	}
	
	return 0;
}
