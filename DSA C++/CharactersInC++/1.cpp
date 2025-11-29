#include <iostream>
using namespace std;
int main(){
    char n;
    cin>>n;

    if(n>='A' and n<='Z'){
        cout<<"You have pressed an uppercase";

    }
    else if (n>='a' and n<='z')
    {
        cout<<"You have pressed a lowercase";
    }
    else if (n>='0' and n<='9')
    {
        cout<<"You have pressed a number";
    }
    else{
        cout<<"You have pressed a special character";
    }
    return 0;
}