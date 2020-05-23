#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int res, max=-1;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	res = a*b*c;
	max = (res>max)?res:max;
	
	res = a+b+c;
	max = (res>max)?res:max;
	
	res = a*b+c;
	max = (res>max)?res:max;
	
	res = a+b*c;
	max = (res>max)?res:max;
	
	res = (a+b)*c;
	max = (res>max)?res:max;
	
	res = a*(b+c);
	max = (res>max)?res:max;
	
	cout<<max<<endl;
	return 0;
}
