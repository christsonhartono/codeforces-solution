#include<iostream>
#include<string>
using namespace std;

int main(){
	int x = 0;
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		
		for(int j=0; j<s.size(); j++){
			if(s.at(j) == '+'){
				x++;
				break;
			}else if(s.at(j) == '-'){
				x--;
				break;
			}
		}
	}
	cout<<x;
	return 0;
}
