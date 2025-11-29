#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    string result = "";
    result = result + s[0]; 

    for (int i = 1; i < s.length(); i++) {
       
        if (s[i] != result.back()) {
            result = result + s[i]; 
        }
    }

    cout << result;
    return 0;

 
}