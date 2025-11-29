#include <iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    if(n>='A'&& n<='Z'){
        cout<<"Uppercase";
    }
    else if (n>='a'&& n<='z'){
        cout<<"Lowercase";
    
    }
    else if (n>='0'&& n<='9'){
        cout<<"Digit";
    }
    else{
    cout<<"Special Character";
    }
return 0;
}