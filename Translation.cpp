#include<iostream>
#include<string>
using namespace std;

string cek(string s, string t){
	int ls = s.size();
	int lt = t.size()-1;
	
	for(int i=0; i<ls; i++){
		if(s.at(i)!=t.at(lt-i)){
			return "NO";
		}
	}	
	return "YES";
}

int main(){
	string s,t;
	cin>>s;
	cin>>t;
	
	cout<<cek(s, t)<<endl;
	
	return 0;
}
