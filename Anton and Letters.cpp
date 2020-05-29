#include<bits/stdc++.h>
using namespace std;

int main(){
	set<char> letters;
	string s;
	
	getline(cin, s);
	
	for(int i=0; i<s.size(); i++){
		if(isalpha(s.at(i)))
			if(letters.find(s.at(i))==letters.end())
				letters.insert(s.at(i));
	}
	
	cout<<letters.size()<<endl;
	return 0;
}
