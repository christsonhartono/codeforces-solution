#include<bits/stdc++.h>
#define iter(a,b,i) for(int i=a; i<b; i++)
using namespace std;

int main(){
	long int n,s,x,y,count=0;
	long int a[1000];
	long int b[1000];
	
	cin>>s>>n;
	
	iter(0, n, i){
		cin>>a[i]>>b[i]
	}
	
	iter(0, n, i){
		iter(0, n-i-1, j){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
				swap(b[j], b[j+1]);
			}
		}
	}

	iter(0, n, i){
		if(a[i]<s){
			s+=b[i];
			count++;
		}else{
			break;
		}
	}
	
	if(count==n)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
