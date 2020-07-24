#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n,m,a,b,c,div,test;
	cin>>n>>m>>a>>b;
	
	test = b/m;
	if(a<=test){
		cout<<a*n<<endl;
	}else{
		c = n%m;
		div = n/m;
		cout<<div*b + min(c*a, b)<<endl;
	}
	
	return 0;
}
