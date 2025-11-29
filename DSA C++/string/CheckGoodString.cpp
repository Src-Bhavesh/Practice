#include <iostream>
using namespace std;
int main() {
    string s;
    
    cin >> s;
    bool flag = true; 

    for (int i = 0; i < s.length(); i++) {
        char a = tolower(s[i]); 
        if (!(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')) {
            flag = false; 
            break;         
        }
    }

    if (flag) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}