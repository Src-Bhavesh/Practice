#include <iostream>
using namespace std;
bool checkeven(int n){
    if (n%2==0){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int n;
    cin>>n;
    checkeven(n);

    return 0;
}