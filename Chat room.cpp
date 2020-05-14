#include <iostream>
using namespace std;

int main() {
	string s1;
	string s2 = "hello";
	int cur = 0, count = 0;
	
    cin >> s1;
    for (int i = 0; i < s1.size(); i++) {
        if (s1.at(i) == s2.at(cur)) {
            cur++;
            count++;
            
            if (count == 5)
                break;
        }
    }
    
    if(count==5)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    
    return 0;
}
