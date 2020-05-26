#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int leng = s.size();
	int cond = 0;
	
	for(int i=0; i<leng; i++){
		if((i+2)<leng && s.at(i)=='W'){
			if(s.at(i+1)=='U' && s.at(i+2)=='B'){
				if(cond==1)
					cout<<" ";
				cond = 0;
			}else{
				cout<<s.at(i);
				cond = 1;
			}
		}else if(s.at(i)=='U' && i-1>=0 && i+1<leng){
			if(s.at(i-1)=='W' && s.at(i+1)=='B'){
				if(cond==1)
					cout<<" ";
				cond = 0;
			}else{
				cout<<s.at(i);
				cond = 1;
			}
		}else if((i-2)>=0 && s.at(i)=='B'){
			if(s.at(i-1)=='U' && s.at(i-2)=='W'){
				if(cond==1)
					cout<<" ";
				cond = 0;
			}else{
				cout<<s.at(i);
				cond = 1;
			}
		}else{
			cout<<s.at(i);
			cond = 1;
		}
	}
	return 0;
}
