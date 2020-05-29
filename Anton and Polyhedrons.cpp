#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, total=0;
	string s;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		if(s.compare("Tetrahedron")==0){
			total+=4;
		}else if(s.compare("Cube")==0){
			total+=6;
		}else if(s.compare("Octahedron")==0){
			total+=8;
		}else if(s.compare("Dodecahedron")==0){
			total+=12;
		}else if(s.compare("Icosahedron")==0){
			total+=20;
		}
	}
	
	cout<<total<<endl;
	return 0;
}
